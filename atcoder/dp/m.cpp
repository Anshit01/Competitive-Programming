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
    int k;
    cin >> k;
    vector<int> a(n);
    inputArray(a);
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
    f(i, 0, n+1){
        dp[i][0] = 1;
    }
    vector<int> pre(k+1);
    pre[0] = 1;
    auto rangeSum = [&](int l, int r){
        int sum = pre[r];
        if(l > 0) sum -=pre[l-1];
        return (sum + mod) % mod;
    };
    f(i, 1, n+1){
        f(j, 1, k+1){
            pre[j] = pre[j-1] + dp[i-1][j];
            dp[i][j] = rangeSum(j - a[i-1], j);
        }
    }
    cout << (dp[n][k] + mod) % mod << endl;
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