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
    int k;
    cin >> k;
    if(k == 1){
        if(n == 1){
            cout << "a" << endl;
        }else{
            cout << -1 << endl;
        }
        return;
    }
    if(k > n){
        cout << -1 << endl;
        return;
    }
    f(i, 0, n-k+2){
        if(i % 2 == 0){
            cout << 'a';
        }else{
            cout << 'b';
        }
    }
    f(i, 2, k){
        cout << char('a'+i);
    }
    cout << endl;

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