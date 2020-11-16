/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
using namespace std;

vector<int> even({1, 1, 2, 2, 3, 3, 4, 4, 5, 5});
vector<int> odd({0, 1, 1, 2, 2, 3, 3, 4, 4, 5});

bool isBoring(vector<int>& s){
    int n = s.size();
    f(i, 1, n+1){
        if(i & 1 && s[i-1] % 2 == 0 || i % 2 == 0 && s[i-1] & 1){
            return false;
        }
    }
    return true;
}

bool isBoring(int n){
    int d = log10(n) + 1;
    vector<int> s(d);
    f(i, d, 0){
        s[i] = n % 10;
        n /= 10;
    }
    return isBoring(s);
}

bool validNum(int num, int pos){
    if((num & 1) == (pos & 1)){
        return true;
    }
    return false;
}

int cntNinesBoring(int d){
    int ans = 1;
    f(i, 0, d){
        ans *= 5;
    }
    return ans;
}

int cntBoring(int n){
    int ans = 0;
    int d = log10(n) + 1;
    f(i, 1, d){
        ans += cntNinesBoring(i);
    }
    vector<int> num(d);
    int tmp = n;
    for(int i = d-1; i >= 0; i--){
        num[i] = tmp % 10;
        tmp /= 10;
    }
    f(i, 0, num.size()){
        if(num[i] != 0){
            if((i+1) & 1){
                if(i != num.size() - 1){
                    ans += odd[num[i] - 1] * cntNinesBoring(num.size() - i - 1);
                }else{
                    ans += odd[num[i]];
                }
            }else{
                if(i != num.size() - 1){
                    ans += even[num[i] - 1] * cntNinesBoring(num.size() - i - 1);
                }else{
                    ans += even[num[i]];
                }
            }
        }

        if(num[i] == 0 || !validNum(num[i], i+1)){
            break;
        }
    }
    return ans;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    f(x, 1, T+1){
        int l, r;
        cin >> l >> r;
        int ans = 0;
        ans += cntBoring(r);
        ans -= cntBoring(l);
        ans += isBoring(l);
        cout << "Case #" << x << ": " << ans << endl;
    }
}