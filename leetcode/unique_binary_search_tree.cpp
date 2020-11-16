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
    map<int, long long> dp;

public:

    Solution(){
        dp[0] = 1;
        dp[1] = 1;
    }

    int numTrees(int n) {
        if(dp.find(n) != dp.end()){
            return dp[n];
        }
        long long ans;
        for(int i = 0; i < n; i++){
            ans += numTrees(i) * numTrees(n-i-1);
        }
        dp[n] = ans;
        return ans;
    }
};

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        
    }
}