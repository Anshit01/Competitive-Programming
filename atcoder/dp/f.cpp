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
    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.size();
    int n2 = s2.size();
    vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
    f(i, 1, n1+1){
        f(j, 1, n2+1){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = max(dp[i-1][j-1] + 1, max(dp[i-1][j], dp[i][j-1]));
            }else{
                dp[i][j] = max(dp[i-1][j-1], max(dp[i-1][j], dp[i][j-1]));
            }
        }
    }
    string lcs;
    int i = n1, j = n2;
    while(i > 0 && j > 0){
        int cur = dp[i][j];
        if(dp[i-1][j-1] + 1 == cur && s1[i-1] == s2[j-1]){
            lcs.push_back(s1[i-1]);
            i--;
            j--;
        }else if(dp[i-1][j-1] == cur){
            i--;
            j--;
        }else if(dp[i-1][j] == cur){
            i--;
        }else {
            j--;
        }
    }
    string ans(lcs.rbegin(), lcs.rend());
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