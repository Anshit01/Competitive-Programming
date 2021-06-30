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

void dfs(vector<vector<int>>& tree, vector<int>& ans, int u, int p){
    ans[u] = p;
    for(int x : tree[u]){
        if(x != p)
            dfs(tree, ans, x, u);
    }
}

void solve() {
    int n;
    cin >> n;
    int r1, r2;
    cin >> r1 >> r2;
    vector<vector<int>> tree(n+1, vector<int>());
    f(i, 1, n+1){
        if(i == r1){
            continue;
        }
        int p;
        cin >> p;
        tree[p].push_back(i);
        tree[i].push_back(p);
    }
    vector<int> ans(n+1, 0);
    dfs(tree, ans, r2, 0);
    f(i, 1, n+1){
        if(ans[i]) cout << ans[i] << ' ';
    }
    cout << endl;
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