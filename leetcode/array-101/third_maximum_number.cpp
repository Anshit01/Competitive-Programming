#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int thirdMax(vector<int>& nums) {
    long long m1 = INT64_MIN, m2 = INT64_MIN, m3 = INT64_MIN;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] > m1){
            m3 = m2;
            m2 = m1;
            m1 = nums[i];
        }else if(nums[i] > m2 && nums[i] < m1){
            m3 = m2;
            m2 = nums[i];
        }else if(nums[i] > m3 && nums[i] < m2){
            m3 = nums[i];
        }
    }
    if(m3 == INT64_MIN){
        return m1;
    }else{
        return m3;
    }
}

int main(){
    vector<int> nums({3, 2, 1});
    cout << thirdMax(nums) << endl;
}