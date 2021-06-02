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

class Solution {
    struct Cell {
        int h, i, j;
        bool operator()(Cell const& a, Cell const& b) const{
            return a.h < b.h;
        }
    };

public:
    int trapRainWater(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        priority_queue<Cell, vector<Cell>, Cell> q;
        for(int i = 0; i < n; i++){
            q.push({heights[i][0], i, 0});
            q.push({heights[i][m-1], i, m-1});
            vis[i][0] = true;
            vis[i][m-1] = true;
        }
        for(int i = 1; i < n-1; i++){
            q.push({heights[0][i], 0, i});
            q.push({heights[n-1][i], n-1, i});
            vis[0][i] = true;
            vis[n-1][i] = true;
        }
        int ans = 0;
        auto push = [&](int i, int j, int h){
            if(i >= 0 && i < n && j >= 0 && j < m && !vis[i][j]){
                if(heights[i][j] < h){
                    ans += 
                }
                q.push({heights[i][j], i, j});
                vis[i][j] = true;
            }
        };
        
        while(!q.empty()){
            auto top = q.top();

            q.pop();
            push()
        }
    }
};

void solve() {
    int n;
    cin >> n;
    
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