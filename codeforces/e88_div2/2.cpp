/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<vector<char>> arr(n, vector<char>(m));
        f(i, 0, n){
            f(j, 0, m){
                cin >> arr[i][j];
            }
        }
        ll cost = 0;
        if(2 * x <= y){
            ll count = 0;
            f(i, 0, n){
                f(j, 0, m){
                    if(arr[i][j] == '.'){
                        count++;
                    }
                }
            }
            cost = count * x;
        }else{
            ll count1 = 0, count2 = 0;
            f(i, 0, n){
                int j = 0;
                while(j < m){
                    if(arr[i][j] == '.'){
                        if(j+1 < m && arr[i][j+1] == '.'){
                            count2++;
                            j++;
                        }else{
                            count1++;
                        }
                    }
                    j++;
                }
            }
            cost = x * count1 + y * count2;
        }
        cout << cost << endl;
    }
}