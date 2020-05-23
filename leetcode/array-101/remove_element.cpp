#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int count = 0, n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] == val){
            int j = i;
            if(i + count < n){
                while(nums[j] == val){
                    count++;
                    j++;
                }
            }
        }
        if(i + count < n){
            nums[i] = nums[i+count];
        }
        
    }
    return n - count;
}

int main(){
    vector<int> nums({3,2,2,3});
    int n = removeElement(nums, 2);
    f(i, 0, n){
        cout << nums[i] << ' ';
    }
    cout << endl;
}