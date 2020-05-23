#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int removeElement(vector<int>& nums, int val){
    int n = nums.size(), back = n-1;
    int i = 0;
    for(;i < n; i++){
        if(nums[i] != val){
            break;
        }
    }
    if(i == n){
        return 0;
    }
    i = 0;
    while(nums[back] == val){
        back--;
    }
    while(i < back){
        if(nums[i] == val){
            nums[i] = nums[back];
            do{
                back--;
            }while(back >= n && nums[back] == val);
        }
        i++;
    }
    return back+1;
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