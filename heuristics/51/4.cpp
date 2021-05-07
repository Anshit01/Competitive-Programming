/* *>>>>> anshit01 <<<<<* */
#include <bits/stdc++.h>
// #define int long long
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
    vector<int> b(n-1);
    inputArray(b);
    vector<int> a(n, 0);
    vector<char> vis(n+1, 0);
    int l = min(n, b[0]);
    for(int i = 1; i <= l; i++){
        int flag = true;
        vis.assign(n+1, 0);
        a[0] = i;
        vis[i] = 1;
        for(int j = 1; j < n; j++){
            a[j] = b[j-1] - a[j-1];
            if(a[j] < 1 || a[j] > n || vis[a[j]]){
                flag = false;
                break;
            }
            vis[a[j]]++;
        }
        if(flag){
            printArray(a);
            return;
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