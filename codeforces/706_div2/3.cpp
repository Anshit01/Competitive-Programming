/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define endl '\n'
typedef long long ll;
typedef long double ld;
const int mod = 1e9+7;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> X, Y;
    f(i, 0, 2*n){
        int x, y;
        cin >> x >> y;
        if(x == 0){
            Y.push_back(y);
        }else{
            X.push_back(x);
        }
    }
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    ld ans = 0;
    f(i, 0, n){
        int x = X[i], y = Y[n-i-1];
        ans += sqrt(ld(x*x) + ld(y*y));
    }
    cout << fixed << setprecision(10) << ans << endl;
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