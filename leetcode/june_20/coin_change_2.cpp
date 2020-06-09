/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int change(int amount, vector<int>& coins) {
    int n = coins.size();
    vector<vector<int>> dp(n+1, vector<int>(amount + 1, 0));
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++){
        dp[i][0] = 1;
        for(int j = 1; j <= amount; j++){
            if(j < coins[i-1]){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]];
            }
        }
    }
    return dp[n][amount];
}

int main(){
    vector<int> coins({1, 2, 5});
    int amount = 5;
    cout << change(amount, coins) << endl;
}