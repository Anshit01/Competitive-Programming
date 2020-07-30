/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, l, r;
    cin >> T;
    while(T--){
        cin >> l >> r;
        if(2*l <= r){
            cout << l << ' ' << 2*l << endl;
        }else{
            cout << -1 << ' ' << -1 << endl;
        }
        
    }
}