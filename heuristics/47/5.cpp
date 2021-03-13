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
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    map<pair<int, int>, bool> vis;
    vector<vector<int>> Yatx(n+1);
    vector<vector<int>> Xaty(n+1);
    f(i, 0, k){
        int a, b;
        cin >> a >> b;
        vis[{a, b}] = false;
        Xaty[b].push_back(a);
        Yatx[a].push_back(b);
    }
    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 1}, 0});
    vis[{1, 1}] = true;
    while(!q.empty()){
        queue<pair<pair<int, int>, int>> qn;
        while(!q.empty()){
            auto pr = q.front();
            q.pop();
            int x1 = pr.first.first;
            int y1 = pr.first.second;
            int time = pr.second;
            if(x1 == x && y1 == y){
                cout << "YES" << endl;
                cout << time << endl;
                return;
            }
            for(int yy : Yatx[x1]){
                if(!vis[{x1, yy}]){
                    qn.push({{x1, yy}, time + abs(y1 - yy)});
                    vis[{x1, yy}] = true;
                }
            }
            for(int xx : Xaty[y1]){
                if(!vis[{xx, y1}]){
                    qn.push({{xx, y1}, time + abs(x1 - xx)});
                    vis[{xx, y1}] = true;
                }
            }
        }
        q = qn;
    }
    cout << "NO" << endl;
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