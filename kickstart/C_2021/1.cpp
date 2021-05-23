/* *>>>>> anshit01 <<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;



void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string s;
    cin >> s;
    int i = (n-1)/2;
    int ans = 0;
    int pw = 1;
    for(; i >= 0; i--){
        ans += (s[i] - 'a') * pw;
        ans %= mod;
        pw = (pw * k) % mod;
    }
    i = (n-1)/2;
    string sp;
    for(int j = 0; j <= i; j++){
        sp.push_back(s[j]);
    }
    if(n % 2 == 1){
        i--;
    }
    while(i >= 0){
        sp.push_back(s[i]);
        i--;
    }
    if(s > sp){
        ans++;
    }
    cout << ans%mod << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    f(t, 1, T+1){
        cout << "Case #" << t << ": ";
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}