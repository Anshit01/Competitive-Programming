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

int maxPathSum(int n, vector<vector<int>>& mat, vector<vector<int>>& dp, int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= n){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    dp[i][j] = max(
        maxPathSum(n, mat, dp, i+1, j),
        max(
            maxPathSum(n, mat, dp, i+1, j-1),
            maxPathSum(n, mat, dp, i+1, j+1)
        )
    ) + mat[i][j];
    return dp[i][j];
}

int maximumPath(int n, vector<vector<int>> matrix){
    int ans = 0;
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for(int i = 0; i < n; i++){
        ans = max(ans, maxPathSum(n, matrix, dp, 0, i));
    }
    return ans;
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