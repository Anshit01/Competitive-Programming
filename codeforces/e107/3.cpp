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
    int q;
    cin >> q;
    vector<int> top(51, 0);
    f(i, 1, n+1){
        int a;
        cin >> a;
        if(top[a] == 0){
            top[a] = i;
        }
    }
    f(i, 0, q){
        int k;
        cin >> k;
        cout << top[k] << ' ';
        f(j, 1, 51){
            if(top[k] > top[j]){
                top[j]++;
            }
        }
        top[k] = 1;
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