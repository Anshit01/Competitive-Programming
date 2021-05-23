/* *>>>>> anshit01 <<<<<* */
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
    int n, l;
    cin >> n >> l;
    vector<int> arr(n);
    inputArray(arr);
    sort(arr.begin(), arr.end());
    int mx = 2*(arr[0] - 0);
    arr.push_back(l + l-arr[n-1]);
    f(i, 0, n){
        mx = max(mx, arr[i+1] - arr[i]);
    }
    cout << fixed <<setprecision(10) << (double)mx/2 << endl;
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