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
    vector<int> val(n);
    inputArray(val);
    vector<vector<int>> dp(k+1, vector<int>(n+1, INT64_MIN));
    f(i, 0, n+1){
        dp[0][i] = 0;
    }
    f(i, 1, k+1){
        int mul = k - i + 1;
        for(int j = n-i; j >= 0; j--){
            dp[i][j] = max(dp[i-1][j+1], dp[i][j+1]) + mul * val[j];
        }
        for(int j = n-i; j >= 0; j--){
            dp[i][j] = max(dp[i][j], dp[i][j+1]);
        }
    }
    cout << dp[k][0] << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}