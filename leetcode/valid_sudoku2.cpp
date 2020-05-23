#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    char arr[9];
    int count;
    for(int i = 0; i < 9; i++){
        count = 0;
        for(int j = 0; j< 9; j++){
            if(board[i][j] != '.'){
                for(int l = 0; l < count; l++){
                    if(board[i][j] == arr[l]){
                        return false;
                    }
                }
                arr[count] = board[i][j];
                count++;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        count = 0;
        for(int j = 0; j< 9; j++){
            if(board[j][i] != '.'){
                for(int l = 0; l < count; l++){
                    if(board[j][i] == arr[l]){
                        return false;
                    }
                }
                arr[count] = board[j][i];
                count++;
            }
        }
    }
    for(int rb = 0; rb < 3; rb++){
        for(int cb = 0; cb < 3; cb++){
            count = 0;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(board[rb*3 + i][cb*3 + j] != '.'){
                        for(int l = 0; l < count; l++){
                            if(board[rb*3 + i][cb*3 + j] == arr[l]){
                                return false;
                            }
                        }
                        arr[count] = board[rb*3 + i][cb*3 + j];
                        count++;
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