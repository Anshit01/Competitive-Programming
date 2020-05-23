#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int maxSubArray(vector<int>& nums){
    int sum = nums[0], sum_max = nums[0];
    int n = nums.size();
    for(int i = 1; i < n; i++){
        sum = max(nums[i], sum + nums[i]);
        sum_max = max(sum_max, sum);
    }
    return sum_max;
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