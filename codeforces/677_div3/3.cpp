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
    int mx = 0, mxcnt = 0;
    f(i, 0, n){
        if(arr[i] > mx){
            mx = arr[i];
            mxcnt = 1;
        }else if(arr[i] == mx){
            mxcnt++;
        }
    }
    if(mxcnt == n){
        cout << -1 << endl;
        return;
    }
    f(i, 0, n){
        if(arr[i] == mx){
            if(i != 0 && arr[i] > arr[i-1]){
                cout << i+1 << endl;
                return;
            }
            if(i != n-1 && arr[i] > arr[i+1]){
                cout << i+1 << endl;
                return;
            }
        }
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