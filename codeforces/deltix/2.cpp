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
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    cout << 3*n << endl;
    f(i, 1, n/2+1){
        cout << 1 << ' ' << 2*i-1 << ' ' << 2*i << endl;
        cout << 2 << ' ' << 2*i-1 << ' ' << 2*i << endl;
        cout << 2 << ' ' << 2*i-1 << ' ' << 2*i << endl;
        cout << 1 << ' ' << 2*i-1 << ' ' << 2*i << endl;
        cout << 2 << ' ' << 2*i-1 << ' ' << 2*i << endl;
        cout << 2 << ' ' << 2*i-1 << ' ' << 2*i << endl;
    }
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