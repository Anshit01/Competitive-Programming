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
    int q, k;
    cin >> q >> k;
    vector<int> a(n);
    inputArray(a);
    vector<int> dp(n+1, 0);
    f(i, 1, n){
        dp[i] = dp[i-1] + a[i] - a[i-1] - 1;
    }
    f(i, 0, q){
        int l, r;
        cin >> l >> r;
        l--; r--;
        int ans = (dp[r] - dp[l])*2 + a[l] - 1 + k - a[r];
        cout << ans << endl;
    }
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