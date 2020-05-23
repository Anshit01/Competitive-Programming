#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    if(binary_search(nums.begin(), nums.end(), target)){
        int min = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int max = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
        return vector<int>({min, max});
    }
    return vector<int>({-1, -1});
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