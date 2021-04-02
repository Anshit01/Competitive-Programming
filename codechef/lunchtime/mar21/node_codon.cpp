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

int bfs(vector<vector<int>>& adj, string& val, string& s, int n, int root){
    if(val[root] != s[0]){
        return 0;
    }
    map<int, int> qm;
    int ans = 0;
    qm[root] = 1;
    int d = 0;
    while(!qm.empty()){
        map<int, int> nq;
        while(!qm.empty()){
            int v = (*qm.begin()).first;
            map<int, int> nnq;
            for(int a : adj[v]){
                if(s[d] == val[a]){
                    nnq[a]++;
                }
            }
            for(auto& pr: nnq){
                nq[pr.first] += qm[v] * nnq[pr.first];
            }
            qm.erase(qm.begin());
            
        }
        qm = nq;
        d++;
    }
    return ans;
}

void solve() {
    int n, m, l;
    cin >> n >> m >> l;
    string s;
    cin >> s;
    string val;
    cin >> val;
    val = ' ' + val;
    vector<int> v(n), u(n);
    inputArray(v);
    inputArray(u);
    vector<vector<int>> adj(n+1, vector<int>());
    f(i, 0, n){
        adj[v[i]].push_back(u[i]);
        adj[u[i]].push_back(v[i]);
    }
    int ans = 0;
    f(i, i, n+1){
        ans += bfs(adj, val, s, n, i);
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