/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
// #define mod 1000000007
#define endl '\n'
using namespace std;

int p(int b, int mod){
    int a = 10;
    ll ans = 1;
    while(b){
        if(b & 1){
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    cout << p(n, m) << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    while(T--){
        solve();
    }
    return 0;
}