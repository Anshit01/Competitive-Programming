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
    int t, n, l;
    cin >> t;
    while(t--){
        cin >> n >> l;
        ll products[l];
        f(i, 0, l){
            cin >> products[i];
        }
        ll arr[l+1];
        arr[0] = products[0] / __gcd(products[0], products[1]);
        f(i, 0, l){
            arr[i+1] = products[i] / arr[i];
        }
        
        
    }
}