/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int, int> mp;
    for(int x : nums){
        if(mp.find(x) == mp.end()){
            mp[x] = 1;
        }else{
            mp[x]++;
        }
    }
    multimap<int, int> mmp;
    for(auto pr : mp){
        mmp.insert({pr.second, pr.first});
    }
    auto it = mmp.end();
    it--;
    int i = 0;
    vector<int> ans;
    while(i < k){
        ans.push_back(it->second);
        i++;
        it--;
    }
    return ans;
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