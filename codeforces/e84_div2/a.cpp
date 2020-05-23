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
    ll t, n, m;
    cin >> t;
    while(t--){
        bool flag = false;
        cin >> n >> m;
        if(n < m){
            flag = false;
        }
        else if(n % 2 == 0 and m % 2 == 0){
            if(m*m <= n){
                flag = true;
            }
        }
        else if(n % 2 == 1 and m % 2 == 1){
            if(m*m <= n){
                flag = true;
            }
        }
        else{
            flag = false;
        }
        cout << ((flag)? "YES" : "NO") << endl;
        
    }
}