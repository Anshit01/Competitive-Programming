/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

class Solution {
private:
    map<int, vector<int>> mp;

public:
    Solution(vector<int>& nums) {
        srand(time(0));
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i]) == mp.end()){
                mp.insert({nums[i], vector<int>({i})});
            }else{
                mp[nums[i]].push_back(i);
            }
        }
    }
    
    int pick(int target) {
        int range = mp[target].size();
        int i = rand() % range;
        return mp[target][i];
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}