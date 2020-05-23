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
    int t, g;
    cin >> t;
    while(t--){
        cin >> g;
        f(i, 0, g){
            int a, n, b;
            cin >> a >> n >> b;
            if(n%2 != 0 && a != b){
                cout << n/2 + 1 << endl;
            }else{
                cout << n/2 << endl;
            }
        }

    }
}