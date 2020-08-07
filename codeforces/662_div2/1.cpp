/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        int ans;
        if(n%2 == 0){
            ans = n/2 + 1;
        }else{
            if(n%4 == 1){
                ans = n/2 + 1;
            }else{
                ans = n/2 + 2;
            }
        }
        if(n == 2) ans = 1;
        if(n == 3) ans = 2;
        cout << ans << endl;
    }
}