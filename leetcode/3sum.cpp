#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    unordered_set<int> num;
    unordered_set<int> num_double;
    int zero_count = 0;
    for(int x : nums){
        if(x == 0) zero_count++;
        else if(num.find(x) != num.end() and x != 0){
            num_double.insert(x);
        }
        else{
            num.insert(x);
        }
    }
    if(zero_count > 0) num.insert(0);
    vector<vector<int>> ans;
    int tofind;
    for(auto itr1 = num.begin(); itr1 != num.end(); itr1++){
        unordered_set<int> st;
        auto itr2 = itr1;
        itr2++;
        for(; itr2 != num.end(); itr2++){
            tofind = -(*itr1 + *itr2);
            if(st.find(tofind) != st.end()){
                ans.push_back({*itr1, *itr2, *st.find(tofind)});
            }
            st.insert(*itr2);
        }
    }
    for(int x : num_double){
        tofind = -x * 2;
        if(num.find(tofind) != num.end()){
            ans.push_back({x, x, *(num.find(tofind))});
        }
    }
    if(zero_count >= 3){
        ans.push_back({0, 0, 0});
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    vector<int> vect = {-1, 0, 1, 2, -1, -4};
    auto ans = threeSum(vect);
    for(auto vec : ans){
        for(auto x : vec){
            cout << x << ' ';
        }
        cout << endl;
    }
    
}