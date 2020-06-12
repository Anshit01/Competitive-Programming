/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

void sortColors(vector<int>& nums) {
    vector<int> count(3, 0);
    for(int a : nums){
        count[a]++;
    }
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(count[j] == 0){
            j++;
        }
        if(count[j] == 0){
            j++;
        }
        nums[i] = j;
        --count[j];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}