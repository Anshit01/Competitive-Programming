#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

pair<int, int> next(int r, int c){
    if(c == 8){
        if(r == 8){
            r = 9;
            c = 9;
        } else {
            r++;
            c = 0;
        }
    } else {
        c++;
    }
    return make_pair(r, c);
}

bool check(vector<vector<char>>& board, int r, int c){
    f(i, 0, 9){
        if(c != i && board[r][c] == board[r][i]){
            return false;
        }
    }
    f(i, 0, 9){
        if(r != i && board[r][c] == board[i][c]){
            return false;
        }
    }
    for(int i = r - (r%3); i < r-(r%3)+3; i++){
        for(int j = c-(c%3); j < c-(c%3)+3; j++){
            if(!(i == r && j == c) && board[i][j] == board[r][c]){
                return false;
            }
        }
    }
    return true;
}

bool solve(vector<vector<char>>& board, int r, int c){
    auto pr = next(r, c);
    if(r == 9 && c == 9){
        return true;
    }
    bool isEmpty  = true;
    if(board[r][c] != '.'){
        isEmpty = false;
        return solve(board, pr.first, pr.second);
    }
    int i = 1;
    while(i <= 9){
        board[r][c] = '0' + i;
        if(check(board, r, c)){
            if(solve(board, pr.first, pr.second)){
                return true;
            }
        }
        i++;
    }
    if(isEmpty){
        board[r][c] = '.';
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    solve(board, 0, 0);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},{'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    
    solveSudoku(board);
    f(i, 0, 9){
        f(j, 0, 9){
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}