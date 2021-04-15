/* *>>>>> anshit01 <<<<<* */
#include <bits/stdc++.h>
// #define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

vector<int> cnt;

void calc(){
    cnt.resize(2 * 1e5 + 10);
    vector<int> d(10, 0);
    d[0] = 1;
    f(j, 0, (int)cnt.size()){
        vector<int> nd(10, 0);
        nd[0] = d[9];
        nd[1] = (d[9] + d[0]) % mod;
        f(i, 2, 10){
            nd[i] = d[i-1];
        }
        d = nd;
        int sum = 0;
        f(i, 0, 10){
            sum += d[i];
            sum %= mod;
        }
        cnt[j] = sum % mod;
    }
    cnt[0] = 1;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> d;
    while(n > 0){
        d.push_back(n%10);
        n /= 10;
    }
    int ans = 0;
    for(int a : d){
        ans += cnt[k+a-1];
        ans %= mod;
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    calc();
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}