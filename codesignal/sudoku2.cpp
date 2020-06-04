/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool sudoku2(vector<vector<char>> grid){
    char arr[9];
    int count;
    for(int i = 0; i < 9; i++){
        count = 0;
        for(int j = 0; j< 9; j++){
            if(grid[i][j] != '.'){
                for(int l = 0; l < count; l++){
                    if(grid[i][j] == arr[l]){
                        return false;
                    }
                }
                arr[count] = grid[i][j];
                count++;
            }
        }
    }
    for(int i = 0; i < 9; i++){
        count = 0;
        for(int j = 0; j< 9; j++){
            if(grid[j][i] != '.'){
                for(int l = 0; l < count; l++){
                    if(grid[j][i] == arr[l]){
                        return false;
                    }
                }
                arr[count] = grid[j][i];
                count++;
            }
        }
    }
    for(int rb = 0; rb < 3; rb++){
        for(int cb = 0; cb < 3; cb++){
            count = 0;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(grid[rb*3 + i][cb*3 + j] != '.'){
                        for(int l = 0; l < count; l++){
                            if(grid[rb*3 + i][cb*3 + j] == arr[l]){
                                return false;
                            }
                        }
                        arr[count] = grid[rb*3 + i][cb*3 + j];
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
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}