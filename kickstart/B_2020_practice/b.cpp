#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    f(x, 1, t+1){
        int d;
        cin >> n >> d;
        int arr[n];
        f(i, 0, n){
            cin >> arr[i];
        }
        for(int i = n-1; i >= 0; i--){
            d -= d % arr[i];
        }
        cout << "Case #" << x << ": " << d << endl;
    }
}