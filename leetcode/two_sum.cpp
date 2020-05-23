#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {             //O(n)
    map<int, int> mp;
    int tofind;
    for(auto itr = nums.begin(); itr != nums.end(); itr++){
        tofind = target - *itr;
        if(mp.find(tofind) != mp.end()){
            return {mp.find(tofind)->second, int(distance(nums.begin(), itr))};
        }
        mp[*itr] = distance(nums.begin(), itr);
    }
    return {-1, -1};
}

vector<int> twoSum2(vector<int>& nums, int target) {            //O(n^2)
    for(auto itr1 = nums.begin(); itr1 != nums.end(); itr1++){
        for(auto itr2 = nums.begin(); itr2 != nums.end(); itr2++){
            if(*itr1 + *itr2 == target){
                return {int(distance(nums.begin(), itr1)), int(distance(nums.begin(), itr2))};
            }
        }
    }
    return {-1, -1};
}

int main(){
    ios::sync_with_stdio(0);
    vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a;
    cin >> a;
    auto ans = twoSum(vect, a);
    for(auto itr = ans.begin(); itr != ans.end(); itr++){
        cout << *itr << ' ';
    }
    cout << endl;
    ans = twoSum2(vect, a);
    for(auto itr = ans.begin(); itr != ans.end(); itr++){
        cout << *itr << ' ';
    }
    cout << endl;
}