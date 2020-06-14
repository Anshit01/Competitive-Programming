/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> searchRange(vector<int>& nums, int target){
    int n = nums.size();
    int l = 0, r = n-1, mid, low = n, high = n;
    while(l <= r){
        mid = l + (r-l)/2;
        if(nums[mid] >= target){
            low = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    l = 0;
    r = n-1;
    while(l <= r){
        mid = l + (r-l)/2;
        if(nums[mid] > target){
            high = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    if(low == high){
        return {-1, -1};
    }
    return {low, high - 1};
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