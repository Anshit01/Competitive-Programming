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

int count(vector<int>& coins, int n){
    int c = coins.size();
    vector<vector<int>> dp(c+1, vector<int>(n+1, 0));
    for(int i = 0; i <= c; i++){
        dp[i][0] = 1;
    }
    for(int i = 1; i <= c; i++){
        for(int j = 1; j <= n; j++){
            dp[i][j] = dp[i-1][j];
            if(j >= coins[i-1]){
                dp[i][j] += dp[i][j-coins[i-1]];
            }
        }
    }
    return dp[c][n];
}

void solve() {
    int n;
    cin >> n;
    
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