#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int stored = 0;
        int a = 0;
        bool flag = true;
        f(i, 0, n){
            cin >> a;
            if(flag){
                stored += a;
                if(stored < k){
                    cout << "NO " << (i+1) << endl;
                    flag = false;
                }
                stored -= k;
            }
        }
        if(flag) 
            cout << "YES\n";
    }
}