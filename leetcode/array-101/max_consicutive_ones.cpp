#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxlen = 0, len = 0;
    int n = nums.size();
    bool active = false;
    for(int i = 0; i < n; i++){
        if(!active){
            if(nums[i] == 1){
                active = true;
                len = 1;
            }
        }else{
            if(nums[i] == 1){
                len++;
            }else{
                maxlen = max(len, maxlen);
                len = 0;
            }
        }
    }
    maxlen = max(maxlen, len);
    return maxlen;
}

int findMaxConsecutiveOnes2(vector<int>& nums) {
    int maxlen = 0, len = 0;
    int n = nums.size();
    for(int i = 1; i < n; i++){
        if(nums[i] == 1){
            nums[i] += nums[i-1];
        }
    }
    return *max_element(nums.begin(), nums.end());
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