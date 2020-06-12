/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<int> dp(n+1, INT32_MAX);
    int ans = 0;
    for(int i = 0; i < n; i++){
        dp[i+1] = min(dp[i], prices[i]);
        ans = max(ans, prices[i] - dp[i+1]);
    }
    return ans;
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