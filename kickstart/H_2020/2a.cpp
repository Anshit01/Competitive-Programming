/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
using namespace std;

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

int cntBoring(int n){
    int ans = 0;
    f(i, 1, n+1){
        int num = i;
        int d = log10(i) + 1;
        vector<int> s(d);
        f(j, d, 0){
            s[j] = num % 10;
            num /= 10;
        }
        ans += isBoring(s);
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