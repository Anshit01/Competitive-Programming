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

vector<int> dp;

void solve() {
    int n;
    cin >> n;
    cout << dp[n] << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    dp.assign(10005, 0);
    dp[0] = 1;
    f(i, 1, 10003){
        dp[i] = dp[i-1];
        if(i >= 2) dp[i] += dp[i-2];
        if(i >= 4) dp[i] += dp[i-4];
        if(i >= 6) dp[i] += dp[i-6];
        dp[i] %= mod;
    }
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}