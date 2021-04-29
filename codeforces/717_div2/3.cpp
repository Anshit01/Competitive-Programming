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

bool canPartition(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for(int x : nums)
        sum += x;
    if(sum&1)
        return false;
    sum/=2;
    bool dp[sum+1];
    memset(dp,false,sizeof(dp));
    dp[0]=true;
    for(int x:nums){
        for(int i=sum;i>=x;i--){
            dp[i]=dp[i]||dp[i-x];
        }
    }
    return dp[sum];
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    if(!canPartition(arr)){
        cout << 0 << endl;
        return;
    }
    int odd = -1;
    f(i, 0, n){
        if(arr[i] & 1){
            odd = i;
            break;
        }
    }
    if(odd != -1){
        cout << 1 << endl;
        cout << odd+1 << endl;
    }else{
        f(i, 0, n){
            vector<int> ar;
            f(j, 0, n){
                if(i != j)
                    ar.push_back(arr[j]);
            }
            if(!canPartition(ar)){
                cout << 1 << endl;
                cout << j+1 << endl;
            }
        }
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