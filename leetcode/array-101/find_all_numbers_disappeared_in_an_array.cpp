#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    vector<bool> exist(n, false);
    for(int i = 0; i < n; i++){
        exist[nums[i] - 1] = true;
    }
    vector<int> ans;
    ans.reserve(n);
    for(int i = 0; i < n; i++){
        if(!exist[i]){
            ans.push_back(i+1);
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}