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
        vector<int> a(n), b(n);
        int mina = INT32_MAX, minb = INT32_MAX;
        f(i, 0, n){
            cin >> a[i];
            mina = min(a[i], mina);
        }
        f(i, 0, n){
            cin >> b[i];
            minb = min(b[i], minb);
        }
        int ans = 0;
        f(i, 0, n){
            int da = a[i] - mina;
            int db = b[i] - minb;
            ans += max(da, db);
        }
        cout << ans << endl;
    }
}