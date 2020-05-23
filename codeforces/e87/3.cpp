#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        n /= 2;
        long double anglediff = (long double)1.57079632679/(long double)n;
        long double angle = anglediff;
        long double ans = 1;
        f(i, 1, n){
            long double proj = (long double)cos(angle);
            ans += (long double)2 * proj;
            angle += anglediff;
        }
        ans *= 1e7;
        ans = round(ans);
        ans /= 1e7;
        cout << setprecision(10) << ans << endl;
    }
}