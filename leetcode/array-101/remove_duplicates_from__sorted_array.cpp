#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    int j = 0, i = 1;
    if(n == 0) return 0;
    while(i < n){
        if(nums[i] != nums[i-1]){
            nums[j] = nums[i-1];
            j++;
        }
        i++;
    }
    nums[j] = nums[n-1];
    return ++j;
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