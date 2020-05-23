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
    int t, a[3];
    cin >> t;
    while(t--){
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if(a[2] > a[0] + a[1] + 1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
        
    }
}