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
    vector<int> arr(n);
    inputArray(arr);
    vector<bool> vis(n, false);
    queue<pair<int, int>> q;
    q.push({0, 0});
    vis[0] = true;
    auto push = [&](int i, int d) {
        if(i >= 0 && i < n && !vis[i]){
            q.push({i, d});
            vis[i] = true;
        }
    };
    while(!q.empty()){
        auto pr = q.front();
        int cur = pr.first;
        int depth = pr.second;
        q.pop();
        if(arr[cur] == 0){
            cout << depth << endl;
            return;
        }
        push(cur - arr[cur], depth + 1);
        push(cur + arr[cur], depth + 1);
    }
    cout << -1 << endl;
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