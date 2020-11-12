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

    int mn(int a, int b, int c){
        return min(a, min(b, c));
    }

public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1));
        for(int i = 0; i <= n; i++){
            dp[i][0] = i;
        }
        for(int i = 0; i <= m; i++){
            dp[0][i] = i;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = mn(dp[i-1][j-1], dp[i][j-1] + 1, dp[i-1][j] + 1);
                }else{
                    dp[i][j] = mn(dp[i-1][j-1], dp[i][j-1], dp[i-1][j]) + 1;
                }
            }
        }
        return dp[n][m];
    }
};

int32_t main(){
    Solution sol;
    ios::sync_with_stdio(0);
    cin.tie(0);
    string w1, w2;
    cin >> w1 >> w2;
    cout << sol.minDistance(w1, w2) << endl;
}