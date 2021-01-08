/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
#define endl '\n'
using namespace std;

class Solution {

    int dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int n, int m, int i, int j){
        if(i < 0 || j < 0 || i >= n || j >= m){
            return 0;
        }
        if(visited[i][j] || grid[i][j] == 0){
            return 0;
        }
        int area = 1;
        visited[i][j] = true;
        area += dfs(grid, visited, n, m, i+1, j);
        area += dfs(grid, visited, n, m, i, j+1);
        area += dfs(grid, visited, n, m, i-1, j);
        area += dfs(grid, visited, n, m, i, j-1);
        return area;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int maxArea = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    maxArea = max(maxArea, dfs(grid, visited, n, m, i, j));
                }
            }
        }
        return maxArea;
    }
};

void solve() {
    int n;
    cin >> n;
    
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}