/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> mp(2001, 0);
        for(int a : arr){
            mp[a]++;
        }
        int i = 1, ki = 0;
        while(ki < k){
            if(mp[i] == 0){
                ki++;
            }
            i++;
        }
        return i-1;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr({2, 3, 4, 7, 11});
    Solution sol;
    cout << sol.findKthPositive(arr, 5) << endl;
}