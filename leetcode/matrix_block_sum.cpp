/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K){
    int n = mat.size(), m = mat[0].size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dp[i+1][j+1] = dp[i][j+1] + dp[i+1][j] - dp[i][j] + mat[i][j];
        }
    }
    vector<vector<int>> ans(n, vector<int> (m, 0));
    int rmin, rmax, cmin, cmax;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            rmin = max(0, i-K-1);
            cmin = max(0, j-K-1);
            rmax = min(n, i+K);
            cmax = min(m, j+K);
            ans[i-1][j-1] = dp[rmax][cmax] - dp[rmax][cmin] - dp[rmin][cmax] + dp[rmin][cmin];
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> mat({{67,64,78},{99,98,38},{82,46,46},{6,52,55},{55,99,45}});
    auto ans = matrixBlockSum(mat, 1);
    for(auto r : ans){
        for(int a : r){
            cout << a << ' ';
        }
        cout << endl;
    }
}