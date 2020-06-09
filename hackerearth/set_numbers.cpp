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
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        if(n == 0){
            cout << 0 << endl;
        }else{
            int len = log2(n) + 1;
            if(len == (int)log2(n+1) + 1){
                cout << ((1 << (len-1)) - 1) << endl;
            }else{
                cout << n << endl;
            }
        }
    }
}