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
    int W;
    cin >> W;
    vector<int> w(n), v(n);
    f(i, 0, n){
        cin >> w[i] >> v[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
    f(i, 1, n+1){
        f(j, 1, W+1){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if(j >= w[i-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j - w[i-1]] + v[i-1]);
            }
        }
    }
    cout << dp[n][W] << endl;
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