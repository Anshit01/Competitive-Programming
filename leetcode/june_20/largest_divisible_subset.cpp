/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> largestDivisibleSubset(vector<int>& nums) {
    int n = nums.size();
    if(n == 0){
        return {};
    }
    sort(nums.begin(), nums.end());
    vector<pair<int, int>> dp(n, {-1, 1});
    int ansi = n-1, anslen = 1;
    for(int i = n-1; i >= 0; i--){
        int k = -1, l = 0;
        for(int j = i + 1; j < n; j++){
            if(nums[j] % nums[i] == 0){
                if(dp[j].second > l){
                    l = dp[j].second;
                    k = j;
                }
                // dp[i] = {j, dp[j].second + 1};
                // if(dp[i].second > anslen){
                //     anslen = dp[i].second;
                //     ansi = i;
                // }
                // break;
            }
            if(k != -1){
                dp[i] = {k, dp[k].second + 1};
                if(dp[i].second > anslen){
                    anslen = dp[i].second;
                    ansi = i;
                }
            }
        }
    }
    vector<int> ans(anslen);
    int i = 0;
    while(ansi != -1){
        ans[i] = nums[ansi];
        ansi = dp[ansi].first;
        i++;
    }
    return ans;
}

int main(){
    vector<int> arr({3, 4, 16, 8});
    auto ans = largestDivisibleSubset(arr);
    for(int a : ans){
        cout << a << ' ';
    }
    cout << endl;
}