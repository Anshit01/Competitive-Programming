/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int n = grid.size();
    if(n == 0) return 0;
    int m = grid[0].size();
    if(m == 0) return 0;
    vector<vector<int>> dp(n, vector<int> (m, 0));
    dp[0][0] = grid[0][0];
    for(int i = 1; i < m; i++){
        dp[0][i] += grid[0][i-1] + grid[0][i];
    }
    for(int i = 1; i < n; i++){
        dp[i][0] = grid[i][0] + grid[i-1][0];
        for(int j = 1; j < m; j++){
            dp[i][j] = dp[i][j] + min(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n-1][m-1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}