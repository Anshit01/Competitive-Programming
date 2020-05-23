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
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        for(int i = 1; i < a; i++){
            for(int j = 0; j < b; j++){
                cout << 'B';
            }
            cout << endl;
        }
        for(int i = 1; i < b; i++){
            cout << 'B';
        }
        cout << 'W' << endl;
    }
}