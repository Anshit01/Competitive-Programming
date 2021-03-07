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
    vector<vector<int>> dp(n, vector<int>(3));
    f(i, 0, n){
        f(j, 0, 3){
            cin >> dp[i][j];
        }
    }
    f(i, 1, n){
        dp[i][0] += max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] += max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] += max(dp[i-1][0], dp[i-1][1]);
    }
    cout << *max_element(dp[n-1].begin(), dp[n-1].end()) << endl;
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