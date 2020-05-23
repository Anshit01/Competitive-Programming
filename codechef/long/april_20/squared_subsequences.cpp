#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(ll i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

inline bool is_special(ll n){
    if(n % 4 == 2){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    ll t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll arr[n];
        vector<ll> indices;
        indices.push_back(-1);
        ll ans = (n * (n+1))/2;
        f(i, 0, n){
            cin >> arr[i];
            if(is_special(arr[i])){
                indices.push_back(i);
            }
        }
        indices.push_back(n);
        ll len = indices.size();
        ans -= len - 2;
        f(i, 1, len-1){
            ll back = indices[i] - indices[i-1] - 1;
            ll front = indices[i+1] - indices[i] - 1;
            ans -= back + front + back * front;
        }
        cout << ans << endl;
    }
}