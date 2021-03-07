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
    int m;
    cin >> m;
    vector<vector<int>> adj(n+1);
    f(i, 0, m){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    vector<int> dp(n+1, 0);
    vector<bool> visited(n+1, false);
    function<void(int)> dfs = [&] (int u) {
        visited[u] = true;
        for(int v : adj[u]){
            if(!visited[v]){
                dfs(v);
            }
            dp[u] = max(dp[u], dp[v] + 1);
        }
    };
    f(i, 1, n+1){
        if(!visited[i]){
            dfs(i);
        }
    }
    int ans = 0;
    f(i, 1, n+1){
        ans = max(ans, dp[i]);
    }
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