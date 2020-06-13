/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

inline int at(vector<int>& nums, int i){
    if(i < 0 || i >= nums.size()){
        return INT32_MIN;
    }
    return nums[i];
}

int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    int l = 0, r = n-1, mid;
    while(l <= r){
        mid = l + (r-l)/2;
        if(at(nums, mid-1) <= at(nums, mid) && at(nums, mid) >= at(nums, mid+1)){
            return mid;
        }else if(at(nums, mid) < at(nums, mid+1)){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return -1;
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