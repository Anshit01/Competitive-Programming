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

int ans;

void dfs(){

}

void solve() {
    ans = 0;
    int n;
    cin >> n;
    vector<bool> token(n+1, false);
    string s;
    cin >> s;
    f(i, 1, n+1){
        if(s[i] == '1') token[i] = true;
    }
    vector<vector<int>> tree(n+1);
    f(i, 2, n+1){
        int v;
        cin >> v;
        tree[v].push_back(i);
    }
    dfs();

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