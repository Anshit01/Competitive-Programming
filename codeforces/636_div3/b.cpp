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
        if(n % 4 == 2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES\n";
            f(i, 0, n/2){
                cout << (i+1) * 2 << ' ';
            }
            f(i, 1, n/2){
                cout << (i-1)*2 + 1 << ' ';
            }
            cout << n + (n/2) - 1 << endl;
        }
    }
}