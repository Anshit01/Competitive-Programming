/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl

using namespace std;

int sumInRange(vector<int> nums, vector<vector<int>> queries){
    const int mod = 1e9 + 7;
    int n = nums.size();
    vector<int> preSum(n+1, 0);
    for(int i = 0; i < n; i++){
        preSum[i+1] = preSum[i] + nums[i];
    }
    long long sum = 0;
    for(auto q : queries){
        sum = (sum + mod + preSum[q[1]+1] - preSum[q[0]]) % mod;
    }
    return sum;
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