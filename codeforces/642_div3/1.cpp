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
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        if(n == 1){
            cout << 0 << endl;
        }else if( n == 2){
            cout << m << endl;
        }else{
            cout << 2 * m << endl;
        }
    }
}