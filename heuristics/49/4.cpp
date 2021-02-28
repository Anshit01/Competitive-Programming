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

pair<int, int> dfs(vector<vector<int>>& graph, vector<bool>& visited, vector<int>& arr, int i){
    visited[i] = true;
    int cityn = 1;
    int vacc = arr[i-1];
    for(int a : graph[i]){
        if(!visited[a]){
            auto pr = dfs(graph, visited, arr, a);
            cityn += pr.first;
            vacc += pr.second;
        }
    }
    return {cityn, vacc};
}

int knapsack(int W, vector<int>& wt, vector<int>& val, int n){
    vector<vector<int>> dp(n+1, vector<int>(W +1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= W; j++){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if(j >= wt[i-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-wt[i-1]] + val[i-1]);
            }
        }
    }
    return dp[n][W];
}

void solve() {
    int n;
    cin >> n;
    int m, k;
    cin >> m >> k;
    vector<int> arr(n);
    inputArray(arr);
    vector<vector<int>> graph(n+1, vector<int>());
    f(i, 0, m){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<bool> visited(n, false);
    vector<pair<int, int>> anss;
    vector<int> wt;
    vector<int> val;
    int ans = 0;
    f(i, 1, n+1){
        if(!visited[i]){
            auto pr = dfs(graph, visited, arr, i);
            int cityn = pr.first;
            int vacc = pr.second;
            if(vacc <= k){
                // ans = max(ans, cityn);
                // anss.push_back({cityn, vacc});
                wt.push_back(vacc);
                val.push_back(cityn);
            }
        }
    }
    ans = knapsack(k, wt, val, wt.size());
    cout << ans << endl;
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