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
    int n, a1, b1;
    cin >> n >> a1 >> b1;
    for(int bt = 0; bt < (1 << n); bt++){
        int a = a1, b = b1;
        cout << bitset<6>(bt) << endl;
        for(int j  = 0; j < n; j++){
            if(bt & (1 << j)){
                a = a + b;
            }else{
                b = b - a;
            }
        }
        cout << a << ' ' << b << endl;
        if(a == -a1 && b == -b1){
            cout << "-----------------------" << endl;
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