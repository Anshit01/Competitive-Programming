/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
#define endl '\n'
using namespace std;

bool isfav(int n, int d){
    while(n > 0){
        if(n % 10 == d){
            return true;
        }
        n /= 10;
    }
    return false;
}

void solve() {
    int q;
    cin >> q;
    int d, n;
    cin >> d;
    f(_, 0, q){
        cin >> n;
        if(n >= d*11){
            cout << "YES" << endl;
            continue;
        }
        vector<bool> dp(d*11+1, false);
        dp[d] = true;
        f(i, d+1, dp.size()){
            if(dp[i-d]){
                dp[i] = true;
            }else if(isfav(i, d)){
                dp[i] = true;
            }
        }
        if(dp[n]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}