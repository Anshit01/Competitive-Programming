#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_sum = INT32_MIN, sum = 0;
    int len = nums.size();
    int arr[len];
    auto itr = nums.begin();
    for(int i = 0; i < len; i++){
        arr[i] = *itr;
        itr++;
    }
    for(int i = 0; i < len; i++){
        sum = 0;
        for(int j = i; j < len; j++){
            sum += arr[j];
            if(sum > max_sum) max_sum = sum;
        }
    }
    return max_sum;
}

int main(){
    ios::sync_with_stdio(0);
    vector<int> vect = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(vect)<< endl;
}