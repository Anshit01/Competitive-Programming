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
    int n;
    cin >> n;
    int fact = 2, prev = 0;
    int ans = 0;
    int i = 3;
    while(i <= n){
        ans = (i-2) * fact + 2 * prev;
        ans %= mod;
        prev = ans;
        fact = (fact * i) % mod;
        i++;
    }
    cout << ans << endl;
}