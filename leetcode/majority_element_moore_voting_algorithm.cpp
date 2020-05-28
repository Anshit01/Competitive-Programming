/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int majorityElement(vector<int>& nums) {
        int count = 1, candidate = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++){
            if(nums[i] == candidate){
                count++;
            }else{
                count--;
            }
            if(count == 0){
                candidate = nums[i];
                count = 1;
            }
        }
        return candidate;
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