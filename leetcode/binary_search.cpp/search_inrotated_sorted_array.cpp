/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int search(vector<int>& nums, int target){
    int n = nums.size();
    int l = 0, r = n-1, mid, smallest;
    
    while(l <= r){
        mid = l + (r-l)/2;
        if(nums[mid] <= nums[0] && nums[mid] <= nums[n-1]){
            smallest = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    l = smallest;
    r = n + smallest - 1;
    while(l <= r){
        mid = l + (r-l)/2;
        if(nums[mid % n] == target){
            return mid % n;
        }else if(nums[mid % n] < target){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums({3, 1});
    cout << search(nums, 1) << endl;
}