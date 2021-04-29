/* *>>>>> anshit01 <<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ti = -1;
        int n = nums.size();
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ti = i;
                break;
            }
        }
        if(ti == -1){
            sort(nums.begin(), nums.end());
            return;
        }
        int ri = ti+1;
        for(int i = ri+1; i < n; i++){
            if(nums[i] > nums[ti] && nums[ri] > nums[i]){
                ri = i;
            }
        }
        swap(nums[ti], nums[ri]);
        sort(nums.begin() + ti+1, nums.end());
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    Solution sol;
    sol.nextPermutation(arr);
    printArray(arr);
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}