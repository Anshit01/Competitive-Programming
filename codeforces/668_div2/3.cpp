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

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sum = 0, buf = 0;
        f(i, 0, k){
            if(s[i] == '1'){
                sum++;
            }else if(s[i] == '0'){
                sum--;
            }else{
                buf++;
            }
        }
        bool flag = true;
        int check = buf - abs(sum);
        if(check < 0 || check % 2  == 1){
            flag = false;
        }
        int target = -sum;

        if(flag){
            f(i, k, n){
                char l = s[i-k];
                char r = s[i];
                if((l == '1' && r == '0') || (l == '0' && r == '1')){
                    flag = false;
                    break;

                }
                if(l == '?' && r != '?'){
                    s[i-k] = r;
                    if(r == '1'){
                        sum++;
                        buf--;
                    }else{
                        sum--;
                        buf--;
                    }
                }else if(l != '?' && r == '?'){
                    s[i] = l;
                }
                int check = buf - abs(sum);
                if(check < 0 || check % 2  == 1){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}