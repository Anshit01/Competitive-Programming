#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    int t, a, b;
    cin >> t;
    while(t--){
        int ans = 0;
        cin >> a >> b;
        if(a > b){
            if((a-b) % 2){
                ans = 2;
            }
            else{
                ans = 1;
            }
        }
        else if(b > a){
            if((b-a) % 2){
                ans = 1;
            }
            else ans = 2;
        }
        cout << ans << endl;
    }
}