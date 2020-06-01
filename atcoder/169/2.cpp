/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

const ll mx = 1e18;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, a;
    cin >> n;
    vector<ll> in(n);
    f(i, 0, n){
        cin >> in[i];
    }
    int zeros = 0;
    f(i, 0, n){
        if(in[i] == 0){
            zeros++;
        }
    }
    if(zeros > 0){
        cout << 0 << endl;
    }else{
        ll tmp, ans = 1;
        f(i, 0, n){
            if(__builtin_mul_overflow(in[i], ans, &tmp)){
                cout << -1 << endl;
                return 0;
            }
            tmp = ans * in[i];
            ans = tmp;
        }
        if(ans <= mx){
            cout << ans << endl;
        }else{
            cout << -1 << endl;
        }
    }
}