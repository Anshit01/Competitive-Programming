/* *>>>>> anshit01 <<<<<* */
#include <bits/stdc++.h>
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i]; cout << endl
#define endl '\n'
typedef long long ll;
const int mod = 1e9+7;
using namespace std;

void solve() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> ans(n, 0);
    f(i, 0, n){
        string s;
        cin >> s;
        int xi = 0, yi = 0;
        f(j, 0, m){
            if(s[j] == 'F'){
                xi++;
            }else if(s[j] == 'P'){
                yi++;
            }
        }
        if(xi >= x || (xi == x-1 && yi >= y)){
            ans[i] = 1;
        }
    }

    printArray(ans);
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