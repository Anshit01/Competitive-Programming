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

    void rec(vector<int>& candidates, vector<vector<int>>& res, vector<int> combination, int target, int start, int curSum){
        if(curSum > target){
            return;
        }
        if(curSum == target){
            res.push_back(combination);
            return;
        }
        
        for(int i = start+1; i < candidates.size(); i++){
            while(i > 0 && candidates[i] == candidates[i-1] && (combination.empty() || combination.back() != candidates[i])){
                i++;
            }
            combination.push_back(candidates[i]);
            rec(candidates, res, combination, target, i, curSum + candidates[i]);
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        rec(candidates, res, {}, target, -1, 0);
        return res;
    }
};

void solve() {
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    vector<int> candidates(n);
    inputArray(candidates);
    Solution s;
    auto ans = s.combinationSum2(candidates, sum);
    for(auto one : ans){
        printArray(one);
    }
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