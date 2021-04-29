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
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxi = max_element(height.begin(), height.end()) - height.begin();
        int curmax = 0;
        int ans = 0;
        for(int i = 0; i < maxi; i++){
            if(height[i] <= curmax){
                ans += curmax - height[i];
            }else{
                curmax = height[i];
            }
        }
        curmax = 0;
        for(int i = n-1; i > maxi; i--){
            if(height[i] <= curmax){
                ans += curmax - height[i];
            }else{
                curmax = height[i];
            }
        }
        return ans;
    }
};

void solve() {
    int n;
    cin >> n;
    
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}