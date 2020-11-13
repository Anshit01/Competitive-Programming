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

class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1));
        for(int i = 0; i <= n; i++) {
            dp[i][0] = i;
        }
        for(int i = 0; i <= m; i++){
            dp[0][i] = i;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(str1[i-1] == str2[j-1]){
                    dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
                }else{
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + 1;
                }
            }
        }
        string ans;
        int i = n, j = m;
        while(i > 0 || j > 0){
            if(i == 0){
                ans.push_back(str2[j-1]);
                j--;
            }else if(j == 0){
                ans.push_back(str1[i-1]);
                i--;
            }else if(str1[i-1] == str2[j-1] && dp[i-1][j-1] <= dp[i-1][j] && dp[i-1][j-1] <= dp[i][j-1]){
                ans.push_back(str1[i-1]);
                i--;
                j--;
            }else if(dp[i-1][j] < dp[i][j-1]){
                ans.push_back(str1[i-1]);
                i--;
            }else{
                ans.push_back(str2[j-1]);
                j--;
            }
        }
        for(int i = 0; i < ans.size()/2; i++){
            swap(ans[i], ans[ans.size() - i - 1]);
        }
        return ans;
    }
};

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    Solution s;
    cout << s.shortestCommonSupersequence(s1, s2) << endl;
}
// "bbbaaaba"
// "bbababbb"