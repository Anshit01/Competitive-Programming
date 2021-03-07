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
    vector<int> a(n);
    inputArray(a);
    vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(n));
    f(i, 0, n){
        dp[i][i] = {a[i], 0};
    }
    f(i, 1, n){
        f(j, 0, n-i){
            auto left = dp[j][i+j-1];
            auto down = dp[j+1][i+j];
            if(left.second + a[i+j] > down.second + a[j]){
                dp[j][i+j] = {left.second + a[i+j], left.first};
            }else{
                dp[j][i+j] = {down.second + a[j], down.first};
            }
        }
    }
    cout << dp[0][n-1].first - dp[0][n-1].second << endl;
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