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

const int INF = INT32_MAX;

void solve() {
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    int n = s.size();
    s = "0" + s;
    vector<vector<int>> dp(n+1, vector<int>(2, 0));
    f(i, 1, n+1){
        if(s[i] == 'J'){
            dp[i][0] = INF;
        }else{
            dp[i][0] = min(
                dp[i-1][0],
                dp[i-1][1] + y
            );
        }
        if(s[i] == 'C'){
            dp[i][1] = INF;
        }else{
            dp[i][1] = min(
                dp[i-1][0] + x,
                dp[i-1][1]
            );
        }
    }
    cout << min(dp[n][0], dp[n][1]) << endl;
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