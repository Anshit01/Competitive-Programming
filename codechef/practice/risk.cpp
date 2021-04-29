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

int dfs(vector<string>& a, vector<vector<bool>>& vis, int i, int j){
    if(vis[i][j] || a[i][j] == '0'){
        return 0;
    }
    vis[i][j] = true;
    int ans = 1;
    ans += dfs(a, vis, i+1, j);
    ans += dfs(a, vis, i, j+1);
    ans += dfs(a, vis, i-1, j);
    ans += dfs(a, vis, i, j-1);
    return ans;
}

void solve() {
    int n, m;
    cin >> n >> m;
    string defstr(m+2, '0');
    vector<string> a(n+2);
    a[0] = defstr;
    a[n+1] = defstr;
    vector<vector<bool>> vis(n+2, vector<bool>(m+2, 0));
    f(i, 1, n+1){
        string s;
        cin >> s;
        a[i] = '0' + s + '0';
    }
    vector<int> islands;
    f(i, 1, n+1){
        f(j, 1, m+1){
            if(a[i][j] == '1' && !vis[i][j]){
                islands.push_back(dfs(a, vis, i, j));
            }
        }
    }
    sort(islands.begin(), islands.end(), greater<int>());
    int ans = 0;
    for(int i = 1; i < islands.size(); i += 2){
        ans += islands[i];
    }
    cout << ans << endl;
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