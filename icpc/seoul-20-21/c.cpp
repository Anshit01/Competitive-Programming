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
    int k;
    cin >> k;
    vector<bool> isapp(n+1, false);
    vector<vector<int>> adj(n+1, vector<int>());
    f(i, 1, n){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> apps(k);
    inputArray(apps);
    f(i, 0, k){
        isapp[apps[i]] = true;
    }
    vector<bool> visited(n+1, false);
    int ngood = 0;
    function<pair<bool, int>(int)> dfs = [&](int v) {
        visited[v] = true;
        bool hasApp = false;
        int cnt = 0;
        for(int vi : adj[v]){
            if(!visited[vi]){
                auto pr = dfs(vi);
                if(pr.first) hasApp = true;
                if(!pr.first) cnt += pr.second;
            }
        }
        if(isapp[v]){
            hasApp = true;
        }
        if(!hasApp){
            cnt++;
        }
        if(hasApp)
            ngood += cnt;
        return make_pair(hasApp, cnt);
    };
    dfs(apps[0]);
    cout << n - ngood << endl;
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