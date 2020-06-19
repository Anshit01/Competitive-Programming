/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

inline ll pow10(ll i){
    ll i2 = i*i;
    ll i8 = i2 * i2;
    i8 *= i8;
    return i2 * i8;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll k;
    cin >> k;
    if(k == 1){
        cout << "codeforces" << endl;
        return 0;
    }
    ll perfPow = 1;
    while(pow10(perfPow) < k){
        perfPow++;
    }
    perfPow--;
    string cf = "codeforces";
    vector<int> cnt(10, perfPow);
    ll product = pow10(perfPow);
    f(i, 0, 10){
        product = product/perfPow * (perfPow+1);
        cnt[i]++;
        if(product >= k){
            break;
        }
    }
    string ans;
    f(i, 0, 10){
        f(j, 0, cnt[i]){
            ans.push_back(cf[i]);
        }
    }
    cout << ans << endl;
}