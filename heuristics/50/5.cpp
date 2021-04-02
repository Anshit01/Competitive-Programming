/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    inputArray(a);
    map<int, int> lastpos;
    vector<int> dp(n+1, 0);
    f(i, 1, n+1){
        int l;
        if(lastpos.find(a[i-1]) != lastpos.end()){
            l = lastpos[a[i-1]];
        }else{
            l = 0;
        }
        lastpos[a[i-1]] = i;
        dp[i] = dp[i-1] + i - l;
    }
    int sum = 0;
    f(i, 1, n+1){
        sum += dp[i];
    }
    cout << sum << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}