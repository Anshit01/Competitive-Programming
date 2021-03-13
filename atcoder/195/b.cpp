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
    int a, b, c;
    cin >> a >> b >> c;
    long double w = c * 1000;
    int mn = 0, mx = 0;
    f(i, 1, 1e6+2){
        if(w/i <= b + 1e-9){
            mn = i;
            break;
        }
    }
    f(i, mn, 1e6+2){
        if(w/i >= a - 1e-9){
            mx = i;
        }else{
            break;
        }
    }
    if(mn && mx){
        cout << mn << " " << mx << endl;
    }else{
        cout << "UNSATISFIABLE" << endl;
    }
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