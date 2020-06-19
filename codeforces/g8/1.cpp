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
        ll a, b, n;
        cin >> a >> b >> n;
        if(a < b){
            swap(a, b);
        }
        int cnt = 0;
        while(a <= n){
            b += a;
            swap(a, b);
            cnt++;
        }
        cout << cnt << endl;
    }
}