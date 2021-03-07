/* *>>>>>Anshit_Bhardwaj<<<<<* */
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
    vector<double> p(n);
    inputArray(p);
    vector<vector<double>> dp(n+1, vector<double>(n+1, 0));
    dp[0][0] = 1;
    f(i, 1, n){
        dp[i][0] = dp[i-1][0] * (1 - p[i-1]);
    }
    f(i, 1, n+1){
        f(j, 1, i+1){
            dp[i][j] = dp[i-1][j] * (1 - p[i-1])  +  dp[i-1][j-1] * p[i-1];
        }
    }
    double ans = 0;
    f(i, (n+1)/2, n+1){
        ans += dp[n][i];
    }
    cout << fixed << setprecision(10) << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}