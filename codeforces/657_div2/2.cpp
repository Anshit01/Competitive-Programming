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
    int T;
    cin >> T;
    while(T--){
        int l, r, m;
        cin >> l >> r >> m;
        f(a, l, r+1){
            int n = m/a;
            int diff = m - n*a;
            if(diff <= r-l && n != 0){
                int b = l+diff;
                int c = l;
                if(n*a + b - c == m){
                    dbg3(a, b, c);
                    break;
                }
            }else{
                n++;
                diff = n*a - m;
                if(diff <= r-l){
                    int b = l;
                    int c = l+diff;
                    if(n*a + b - c == m){
                        dbg3(a, b, c);
                        break;
                    }
                }
            }
        }
        
    }
}