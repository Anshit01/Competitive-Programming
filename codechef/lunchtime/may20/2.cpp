/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

__int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        vector<int> v1(n), v2(n);
        f(i, 0, n){
            cin >> v1[i];
        }
        f(i, 0, n){
            cin >> v2[i];
        }
        int x = 0, y = 0;
        int ans = 0;
        f(i, 0, n){
            if(x == y && v1[i] == v2[i]){
                ans += v1[i];
            }
            x += v1[i];
            y += v2[i];
        }
        cout << ans << endl;
    }
}