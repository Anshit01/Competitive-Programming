#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int maxCrossSum(vector<int>& nums, int start, int mid, int end){
    int maxLeft = nums[mid], sum = maxLeft;
    for(int i = mid-1; i >= 0; i--){
        sum += nums[i];
        maxLeft = max(maxLeft, sum);
    }
    int maxRight = 0;
    sum = 0;
    for(int i = mid+1; i <= end; i++){
        sum += nums[i];
        maxRight = max(maxRight, sum);
    }
    return maxLeft + maxRight;
}

int maxSubarraySum(vector<int>& nums, int start, int end){
    if(end == start){
        return nums[start];
    }
    int mid = (end+start)/2;
    return max(maxSubarraySum(nums, start, mid),
                maxSubarraySum(nums, mid+1, end),
                maxCrossSum(nums, start, mid, end));
}

int maxSubArray(vector<int>& nums){
    return maxSubarraySum(nums, 0, nums.size()-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}