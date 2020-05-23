#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define fastio() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
using namespace std;

int main(){
    fastio();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1){
            cout << 1 << endl << 1 << ' ' << 1 << endl;
        }
        else if(n == 2){
            cout << 1 << endl << 2 << ' ' << 1 << ' ' << 2 << endl;
        }
        else if(n >= 3){
            cout << n/2 << endl << 3 << ' ' << 1 << ' ' << 2 << ' ' << 3 << ' ' << endl;
            for(int i = 4; i < n; i += 2){
                cout << 2 << ' ' << i << ' ' << i+1 << endl;
            }
            if(n%2 == 0){
                cout << 1 << ' ' << n << endl;
            }
        }
        
    }
}