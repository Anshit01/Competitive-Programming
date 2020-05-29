/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> count(101, 0);
    int n = nums.size();
    for(int i = 0; i < n; i++){
        count[nums[i]]++;
    }
    for(int i = 1; i <= 100; i++){
        count[i] += count[i-1];
    }
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        ans[i] = (nums[i])? count[nums[i] - 1] : 0;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}