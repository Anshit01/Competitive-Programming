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
    
    void dfs(vector<vector<char>>& board, vector<vector<bool>>& visited, int n, int m, int i, int j){
        if(i < 0 || j < 0 || i >= n || j >= m){
            return;
        }
        if(visited[i][j] || board[i][j] == 'X'){
            return;
        }
        visited[i][j] = true;
        dfs(board, visited, n, m, i+1, j);
        dfs(board, visited, n, m, i, j+1);
        dfs(board, visited, n, m, i-1, j);
        dfs(board, visited, n, m, i, j-1);
    }

public:
    void solve(vector<vector<char>>& board){
        int n = board.size();
        if(n == 0){
            return;
        }
        int m = board[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for(int i = 0; i < n; i++){
            dfs(board, visited, n, m, i, 0);
            dfs(board, visited, n, m, i, m-1);
        }
        for(int i = 1; i < m-1; i++){
            dfs(board, visited, n, m, 0, i);
            dfs(board, visited, n, m, n-1, i);
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
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
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}