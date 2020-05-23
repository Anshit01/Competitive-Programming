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
    int t, n, k1, k2;
    cin >> t;
    while(t--){
        cin >> n >> k1 >> k2;
        int max1 = 0, max2 = 0, a;
        f(i, 0, k1){
            cin >> a;
            if(a > max1) max1 = a;
        }
        f(i, 0, k2){
            cin >> a;
            if(a > max2) max2 = a;
        }
        if(max1 > max2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}