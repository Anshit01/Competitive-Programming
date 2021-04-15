/* *>>>>> anshit01 <<<<<* */
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
    int m;
    cin >> m;
    vector<int> a;
    int sum = 0;
    f(i, 0, m){
        int p, c;
        cin >> p >> c;
        sum += p*c;
        f(i, 0, c){
            a.push_back(p);
        }
    }
    int n = a.size();
    vector<vector<int>> dp(n+1, vector<int>(sum+1, 0));
    f(i, 0, n+1){
        dp[i][0] = 1;
    }
    int ans = 0;
    f(i, 1, n+1){
        f(j, a[i], sum+1){
            dp[i][j] = dp[i-1][j];
            dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] * a[i]);
            if(dp[i][j] == sum - j){
                ans = max(ans, dp[i][j]);
            }
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    f(t, 1, T+1){
        cout << "Case #" << t << ": ";
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}