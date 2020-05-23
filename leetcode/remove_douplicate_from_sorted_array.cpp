#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    auto current_itr = nums.begin();
    int len = 1;
    for(int x : nums){
        if(x != *current_itr){
            current_itr++;
            *current_itr = x;
            len++;
        }
    }
    return len;
}

int main(){
    ios::sync_with_stdio(0);
    vector<int> vect = {1,1,1,2,3,3,3,3,3,3,4,5,7,7};
    cout << removeDuplicates(vect);
}