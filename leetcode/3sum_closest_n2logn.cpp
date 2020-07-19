/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int sum;
    int ans = INT32_MAX - 1e4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                sum = nums[i] + nums[j];
                int k = lower_bound(nums.begin(), nums.end(), target - nums[i] - nums[j]) - nums.begin();
                if(k < n && k != i && k != j){
                    if(abs(target - ans) > abs(target - sum - nums[k])){
                        ans = sum + nums[k];
                    }
                }
                if(k + 1 < n){
                    k++;
                    if(k != i && k != j){
                        if(abs(target - ans) > abs(target - sum - nums[k])){
                            ans = sum + nums[k];
                        }
                    }
                }
                if(k > 1){
                    k -= 2;
                    if(k != i && k != j){
                        if(abs(target - ans) > abs(target - sum - nums[k])){
                            ans = sum + nums[k];
                        }
                    }
                }
            }
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}