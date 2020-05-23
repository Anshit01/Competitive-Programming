#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool isCorrect(vector<vector<char>>& wall){
    for(auto hi : wall){
        bool ended = false;
        for(char c : hi){
            if(!ended){
                if(c == 0){
                    ended = true;
                }
            }else{
                if(c != 0){
                    return false;
                }
            }
        }
    }
    return true;
}

vector<vector<char>> test(vector<vector<char>>& wall, vector<vector<char>> table, char c){
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    f(x, 1, t+1){
        int h, w;
        cin >> h >> w;
        vector<string> walldata;
        f(i, 0, h){
            cin >> walldata[i];
        }
        vector<vector<char>> wall(w, *(new vector<char>(h, 0)));
        f(i, 0, h){
            f(j, 0, w){
                wall[j][h-i-1] = walldata[i][j];
            }
        }
        vector<vector<char>> table(w, *(new vector<char>(h, 0)));
        

        cout << "Case #" << x << ": ";
    }
}