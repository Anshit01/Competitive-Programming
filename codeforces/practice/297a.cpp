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
    int n = 4;
    vector<string> arr(n);
    f(i, 0, n){
        cin >> arr[i];
    }
    f(i, 0, n-1){
        f(j, 0, n-1){
            int cnt = (arr[i][j] == '.') + (arr[i][j+1] == '.') + (arr[i+1][j] == '.') + (arr[i+1][j+1] == '.');
            if(cnt != 2){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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