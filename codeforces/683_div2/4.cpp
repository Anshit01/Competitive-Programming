/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    int ans = 0;
    f(i, 1, n+1){
        f(j, 1, m+1){
            int delMax = max(dp[i-1][j], dp[i][j-1]) - 1;
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = max(dp[i-1][j-1] + 2, delMax);
            }else{
                dp[i][j] = max(dp[i-1][j-1] - 2, delMax);
            }
            dp[i][j] = max(dp[i][j], 0);
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << endl;

}