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
    int l, r;
    cin >> l >> r;
    int ans = 0;
    vector<int> c(5, 0);
    vector<pair<int, int>> threes;
    f(i, l, r+1){
        int n = i;
        // cout << n << ' ';
        int cnt = 1;
        while(n > 2){
            f(j, 2, n){
                if(n % j != 0){
                    // cnt++;
                    ans++;
                    n = j;
                    break;
                }
            }
            
            // cout << n << ' ';
        }
        // c[cnt]++;
        // if(cnt == 4 && i % 12 != 6) cout << i << endl;
    }
    cout << ans + r - l + 1 << endl;
    // printArray(c);
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