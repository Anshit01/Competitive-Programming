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

int permutation(int d, int s, vector<vector<int>>& dp){
    if(dp[d][s] != -1){
        return dp[d][s];
    }
    if(s == 1){
        return d;
    }
    int ans = 0;
    for(int i = d; i > 0; i--){
        ans += permutation(i, s-1, dp);
    }
    ans %= mod;
    dp[d][s] = ans;
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> dp(10, vector<int>(n+1, -1));
    int ans = 1;
    string s;
    cin >> s;
    int l = 1;
    int r = 9;
    int mx = 1;
    f(i, 0, n){
        if(s[i] != '-'){
            if(s[i] - '0' < mx){
                cout << 0 << endl;
                return;
            }
            mx = s[i] - '0';
        }
    }
    bool active = false;
    int li = -1, ri = 0;
    f(i, 0, n){
        if(s[i] == '-'){
            active = true;
        }else if(active){
            active = false;
            r = s[i] - '0';
            ri = i;
            ans *= permutation(r-l+1, ri-li-1, dp);
            ans %= mod;
        }else{
            l = s[i] - '0';
            li = i;
        }
    }
    if(active){
        ri = n;
        r = 9;
        ans *= permutation(r-l+1, ri-li-1, dp);
    }
    cout << ans % mod << endl;
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