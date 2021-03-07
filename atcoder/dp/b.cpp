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
    vector<int> dp(n, INT64_MAX);
    dp[0] = 0;
    f(i, 1, n){
        f(j, 1, k+1){
            if(i - j >= 0){
                dp[i] = min(dp[i], dp[i-j] + abs(a[i] - a[i-j]));
            }
        }
    }
    cout << dp[n-1] << endl;
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