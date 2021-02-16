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
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    f(i, 0, n){
        f(j, 0, m){
            cin >> grid[i][j];
            grid[i][j] -= '0';
        }
    }
    int ans = m;
    int minReq = m/2;
    bool flag;
    int cnt;
    for(int b = 0; b < (1 << m); b++){
        minReq = __builtin_popcount(b);
        flag = true;
        f(i, 0, n){
            cnt = 0;
            f(j, 0, m){
                if((b & (1 << j)) && grid[i][j]){
                    cnt++;
                }
            }
            if(cnt < minReq/2){
                flag = false;
                break;
            }
        }
        if(flag){
            ans = min(ans, m - minReq);
        }
    }
    cout << ans << endl;
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