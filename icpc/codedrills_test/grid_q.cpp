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
    int n, m, k;
    cin >> n >> m >> k;
    vector<pair<int, int>> dist(n+m, {0, 0});   //{cnt, mxe}
    f(i, 0, k){
        int e, x, y;
        cin >> e >> x >> y;
        int d = n - x + m - y;
        dist[d].first++;
        dist[d].second = max(dist[d].second, e);
    }
    f(i, 1, n+m){
        dist[i].first += dist[i-1].first;
        dist[i].second = max(dist[i].second, dist[i-1].second);
    }
    int q;
    cin >> q;
    f(i, 0, q){
        int t;
        cin >> t;
        if(t < n+m){
            cout << dist[t].first * dist[t].second << endl;
        }else{
            cout << dist[n+m-1].first * dist[n+m-1].second << endl;
        }
    }
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
