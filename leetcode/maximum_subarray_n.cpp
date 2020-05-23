#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int maxSubArray(vector<int>& nums) {
    auto itr = nums.begin();
    int prev = *itr;
    int max = prev;
    itr++;
    for(; itr != nums.end(); itr++){
        if(prev + *itr > *itr){
            *itr += prev;
        }
        prev = *itr;
        if(prev > max) max = prev;
    }
    return max;
}

int main(){
    ios::sync_with_stdio(0);
    vector<int> vect = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(vect)<< endl;
}