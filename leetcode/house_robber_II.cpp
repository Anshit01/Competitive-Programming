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
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        if(n == 2){
            return max(nums[0], nums[1]);
        }
        if(n == 3){
            return max(nums[0], max(nums[1], nums[2]));
        }
        vector<int> dp(n, 0);
        int ans = 0;
        dp[0] = 0;
        dp[1] = nums[0];
        dp[2] = nums[1];
        for(int i = 3; i < n; i++){
            dp[i] = max(dp[i-2], dp[i-3]) + nums[i-1];
        }
        ans = max(dp[n-1], dp[n-2]);
        dp[1] = nums[1];
        dp[2] = nums[2];
        for(int i = 3; i < n; i++){
            dp[i] = max(dp[i-2], dp[i-3]) + nums[i];
        }
        ans = max(ans, max(dp[n-1], dp[n-2]));
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