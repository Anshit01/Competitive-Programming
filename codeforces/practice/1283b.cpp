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
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int res = n % k;
        if(res > int(k/2)){
            res = int(k/2);
        }
        res += n - (n%k);
        cout << res << endl;
    }
}