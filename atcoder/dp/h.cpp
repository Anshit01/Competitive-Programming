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
    vector<vector<bool>> isempty(n+1, vector<bool>(m+1, 0));
    f(i, 1, n+1){
        f(j, 1, m+1){
            char c;
            cin >> c;
            if(c == '.'){
                isempty[i][j] = 1;
            }
        }
    }
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    dp[1][0] = 1;
    f(i, 1, n+1){
        f(j, 1, m+1){
            if(isempty[i][j]){
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
            }
        }
    }
    cout << dp[n][m] << endl;
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