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
    vector<int> a(n), b(n);
    f(i, 0, n){
        cin >> a[i] >> b[i];
    }
    int ans = INT64_MAX;
    vector<int> amins(2, INT64_MAX), bmins(2, INT64_MAX);
    f(i, 0, n){
        if(a[i] < a[amins[0]]){
            amins[1] = amins[0];
            amins[0] = i;
        }else if(a[i] < a[amins[1]]){
            amins[1] = i;
        }
        if(b[i] < b[bmins[0]]){
            bmins[1] = bmins[0];
            bmins[0] = i;
        }else if(a[i] < a[amins[1]]){
            bmins[1] = i;
        }
    }
    ans = a[amins[0]] + b[bmins[0]];
    if(amins[0] == bmins[0]){
        if(amins[0] != bmins[1] && amins[1] != INT64_MAX){
            ans = min(ans, max(a[amins[0]], b[bmins[1]]));
        }
        if(amins[1] != bmins[0] && amins[1] != INT64_MAX){
            ans = min(ans, max(a[amins[1]], b[bmins[0]]));
        }
    }

    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}