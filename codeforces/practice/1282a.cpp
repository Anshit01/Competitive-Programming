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
    int t, a, b, c, r;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> r;
        if(a > b) a = a + b - (b = a);
        int tstart = c-r, tend = c+r;
        int ans = 0;
        if(tstart > a and tstart < b){
            ans += tstart - a;
        }
        if(tend > a and tend < b){
            ans += b - tend;
        }
        if(tstart >= b or tend <= a){
            ans = b - a;
        }
        cout << ans << endl;
        
    }
}