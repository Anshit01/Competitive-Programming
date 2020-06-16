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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    f(i, 0, n){
        cin >> arr[i];
    }
    ll minDiff = INT32_MAX;
    ll sum1, sum2;
    for(ll set = 0; set < (1 << n); set++){
        sum1 = 0;
        sum2 = 0;
        for(ll i = 0; i < n; i++){
            if(set & (1 << i)){
                sum1 += arr[i];
            }else{
                sum2 += arr[i];
            }
        }
        minDiff = min(minDiff, abs(sum1 - sum2));
    }
    cout << minDiff << endl;
}