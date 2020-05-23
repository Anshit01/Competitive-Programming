#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        
        f(i, 1, k){
            vector<int> arr(20, -1);
            ll n1 = n, j = 0;
            while(n1 > 0){
                arr[j] = n1 % 10;
                n1 /= 10;
                j++;
            }
            
            int mind = 9, maxd = 0;
            bool flag = false;
            f(ii, 0, j){
                if(arr[ii] == 0) flag = true;
                mind = min(mind, arr[ii]);
                maxd = max(maxd, arr[ii]);
            }
            if(flag) break;
            n += maxd*mind;
        }
        cout << n << endl;
    }
}