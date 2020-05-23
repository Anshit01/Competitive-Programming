#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr;
        int a;
        f(i, 0, n){
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        cin >> a;
        cout << lower_bound(arr.begin(), arr.end(), a) - arr.begin();
        cout << endl;
        cout << upper_bound(arr.begin(), arr.end(), a) - arr.begin();
        cout << endl;
    }
}