/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int productExceptSelf(std::vector<int> nums, int m) {
    int n = nums.size();
    vector<int> left(n);
    left[0] = 1;
    for(int i = 1; i < n; i++){
        left[i] = (left[i-1] * nums[i-1]) % m;
    }
    vector<int> right(n);
    right[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        right[i] = (right[i+1] * nums[i+1]) % m;
    }
    for(int i = 0; i < n; i++){
        nums[i] = (left[i] * right[i]) % m;
    }
    int sum = 0;
    for(int a : nums){
        sum  = (sum + a) % m;
    }
    return sum;
}


int main(){
    vector<int> vec({1, 2, 3, 4});
    int m = 12;
    cout << productExceptSelf(vec, m) << endl;
}