#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(board[i][j] != '.'){
                for(int k = j+1; k < 9; k++){
                    if(board[i][j] == board[i][k]){
                        return false;
                    }
                }
            }
            if(board[j][i] != '.'){
                for(int k = i+1; k < 9; k++){
                    if(board[j][i] == board[j][k]){
                        return false;
                    }
                }
            }
        }
    }
    for(int rb = 0; rb < 3; rb++){
        for(int cb = 0; cb < 3; cb++){
            for(int ri = 0; ri < 3; ri++){
                for(int ci = 0; ci < 3; ci++){
                    char a = board[rb*3 + ri][cb*3 + ci];
                    if(a != '.'){
                        for(int rj = ri+1; rj < 3; rj++){
                            for(int cj = ci+1; cj < 3; cj++){
                                if(a == board[rb*3 + rj][cb*3 + cj]){
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}