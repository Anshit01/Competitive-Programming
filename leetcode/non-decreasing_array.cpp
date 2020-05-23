#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;


bool isNonDecreasing(vector<int>& nums, int ind){
    int n = nums.size();
    if((ind != 0 && ind != n-1) && nums[ind-1] > nums[ind+1]){
        return false;
    }
    for(int i = ind+2; i < n; i++){
        if(nums[i-1] > nums[i]){
            return false;
        }
    }
    for(int i = 1; i < ind; i++){
        if(nums[i-1] > nums[i]){
            return false;
        }
    }
    return true;
}

bool checkPossibility(vector<int>& nums) {
    int n = nums.size();
    for(int i = 1; i < n; i++){
        if(nums[i-1] > nums[i]){
            if(isNonDecreasing(nums, i-1) || isNonDecreasing(nums, i)){
                return true;
            }else{
                return false;
            }
        }
    }
    return true;
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    vector<int> nums({1, 2, 4, 5, 3});
    cout << checkPossibility(nums) << endl;
}