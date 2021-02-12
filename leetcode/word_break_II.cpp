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

class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict;
        int wl = 0;
        for(string w : wordDict){
            wl = max(wl, (int)w.size());
            dict.insert(w);
        }
        int n = s.size();
        vector<bool> dp(n+1, 0);
        dp[0] = true;
        for(int i = 1; i <= n; i++){
            for(int l = 1; i-l >= 0 && l <= wl; l++){
                if(dp[i-l] && dict.count(string(s, i-l, l))){
                    dp[i] = true;
                }
            }
        }
        unordered_set<int> wlen;
        for(string w : wordDict){
            wlen.insert(w.size());
        }
        
    }
};

void solve() {
    int n;
    cin >> n;
    
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}