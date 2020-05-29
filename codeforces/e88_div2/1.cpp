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
    cin.tie(NULL);
    int T, n, m, k;
    cin >> T;
    while(T--){
        cin >> n >> m >> k;
        int cardsi = n/k, ans;
        if(cardsi >= m){
            ans = m;
        }else{
            m -= cardsi;
            k--;
            ans = cardsi - ((m % k)? m/k + 1 : m/k);
        }
        cout << ans << endl;
    }
}