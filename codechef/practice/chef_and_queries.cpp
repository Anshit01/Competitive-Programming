/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bitset<UINT32_MAX/2> arr(0);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll q, a, b;
    unsigned int s, s2;
    ll m = 1ll << 32;
    unsigned ll sum = 0;
    cin >> q >> s >> a >> b;
    while(q--){
        s2 = s/2;
        if(s & 1){
            if(!arr[s2]){
                arr[s2] = 1;
                sum += s2;
            }
        }else{
            if(arr[s2]){
                arr[s2] = 0;
                sum -= s2;
            }
        }
        s = a*s + b;
    }
    cout << sum << endl;
}