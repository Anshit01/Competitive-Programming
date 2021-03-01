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
    int q;
    cin >> q;
    int cnt1 = 0;
    int a;
    vector<int> arr(n);
    inputArray(arr);
    f(i, 0, n){
        if(arr[i]) cnt1++;
    }
    f(i, 0, q){
        int op;
        cin >> op >> a;
        a--;
        if(op == 1){
            if(arr[a]){
                arr[a] = 0;
                cnt1--;
            }else{
                arr[a] = 1;
                cnt1++;
            }
        }else{
            if(a < cnt1){
                cout << 1 << endl;
            }else{
                cout << 0 << endl;
            }
        }
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