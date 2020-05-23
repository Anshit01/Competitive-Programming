#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

void moveZeroes(vector<int>& nums) {
    int ind = 0, n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            nums[ind] = nums[i];
            if(i != ind){
                nums[i] = 0;
            }
            ind++;
        }
    }
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