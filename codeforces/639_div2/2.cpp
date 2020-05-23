#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll i = 0;
        ll sum = 0;
        while(n >= sum){
            i++;
            sum += (2 * i) + (i-1);
        }
        sum -= (2*i) + (i-1);
        i--;
        int ans = 0;
        while(n > 1){
            if(n >= sum){
                n -= sum;
                ans++;
            }
            else{
                sum -= (2 * i) + (i-1);
                i--;
            }
        }
        cout << ans << endl;
    }
}