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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int p_prev = 0, c_prev = 0;
        int p, c;
        bool flag = true;
        f(i, 0, n){
            cin >> p >> c;
            if(!(p >= c and p >= p_prev and c >= c_prev)){
                flag = false;
            }
            if(c > c_prev){
                if(c - c_prev > p - p_prev){
                    flag = false;
                }
            }
            p_prev = p;
            c_prev = c;
        }
        cout << ((flag)? "YES" : "NO") << endl;
    }
}