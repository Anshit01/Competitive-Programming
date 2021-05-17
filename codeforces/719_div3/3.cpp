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
    if(n == 2){
        cout << -1 << endl;
        return;
    }
    vector<vector<int>> mat(n, vector<int>(n));
    for(int i = 0; i < n*n; i += 2){
        mat[i/n][i%n] = i/2 + 1;
    }
    int shift = (n*n+1)/2;
    for(int i = 1; i < n*n; i += 2){
        mat[i/n][i%n] = shift + i/2+1;
    }
    f(i, 0, n){
        f(j, 0, n){
            cout << mat[i][j] << ' ';
        }
        cout << endl;
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