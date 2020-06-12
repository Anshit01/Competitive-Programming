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
    int T;
    cin >> T;
    while(T--){
        int a , b;
        cin >> a >> b;
        int ans = 0;
        if(a < b){
            swap(a, b);
        }
        if(a/2 >= b){
            ans = b;
        }else{
            ans = (a+b)/3;
        }
        cout << ans << endl;
    }
}