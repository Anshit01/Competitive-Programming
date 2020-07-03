/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int singleNumber(vector<int>& nums){
    int n = nums.size();
    if(n == 1){
        return nums[0];
    }
    sort(nums.begin(), nums.end());
    if(nums[0] != nums[1]){
        return nums[0];
    }else if(nums.back() != nums[n - 2]){
        return nums.back();
    }
    for(int i = 1; i < n - 1; i++){
        if(nums[i -1] != nums[i] && nums[i + 1] != nums[i]){
            return nums[i];
        }
    }
    return nums[0];
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