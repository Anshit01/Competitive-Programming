/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int maxProduct(vector<int>& nums){
    int mx1 = 0, mx2 = 0;
    for(int a : nums){
        if(a >= mx1){
            mx2 = mx1;
            mx1 = a;
        }else if(a > mx2){
            mx2 = a;
        }
    }
    return (mx1 - 1) * (mx2 - 1);
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