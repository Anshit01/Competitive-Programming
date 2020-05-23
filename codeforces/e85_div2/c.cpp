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
        ll h[n], d[n], new_h[n];
        f(i, 0, n){
            cin >> h[i] >> d[i];
            if(i != 0){
                new_h[i] = (h[i] - d[i-1] > 0)? h[i] - d[i-1] : 0;
            }
        }
        new_h[0] = (h[0] - d[n-1] > 0)? h[0] - d[n-1] : 0;
        ll sum = 0;
        f(i, 0, n){
            sum += new_h[i];
        }
        ll min_sum = sum+h[0];
        f(i, 0, n){
            if(sum - new_h[i] + h[i] < min_sum){
                min_sum = sum - new_h[i] + h[i];
            }
        }
        cout << min_sum << endl;
    }
}