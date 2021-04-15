#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<pair<int, int>>> twosums(1e6, vector<pair<int, int>>());
    auto set = [&](int sum, int i, int j) {
        twosums[4*1e5 + sum].push_back({i, j});
    };
    auto get = [&](int sum) ->vector<pair<int, int>>& {
        return twosums[4*1e5 + sum];
    };
    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            get(nums[i] + nums[j]).push_back({i, j});
            
        }
    }
    for(int i = 0; i < n; i++){
        for(auto pr : get(-nums[i])){
            if(i != pr.first && i != pr.second){
                ans.push_back({nums[pr.first], nums[pr.second], nums[i]});
            }
        }
    }
    return ans;
}

vector<vector<int>> threeSum2(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++){
        if(i != 0 && nums[i] == nums[i-1]){
            i++;
            continue;
        }
        for(int j = i+1; j < n; j++){
            if(j != i+1 && nums[j] == nums[j-1]){
                j++;
                continue;
            }
            if(binary_search(nums.begin() + j + 1, nums.end(), -(nums[i] + nums[j]))){
                ans.push_back({nums[i], nums[j], -(nums[i]+ nums[j])});
            }
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> vect(n);
    f(i, 0, n){
        cin >> vect[i];
    }
    auto ans = threeSum2(vect);
    for(auto vec : ans){
        for(auto x : vec){
            cout << x << ' ';
        }
        cout << endl;
    }
    
}
// [-1 0 1 2 -1 -4 -2 -3 3 0 4]