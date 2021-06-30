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
    vector<int> arr(n);
    inputArray(arr);
    vector<int> odd;
    f(i, 0, n){
        if(arr[i] % 2 == 1){
            odd.push_back(arr[i]);
        }
    }
    int oddcnt = odd.size();
    int evencnt = n-oddcnt;
    int ans = oddcnt * evencnt + (evencnt * (evencnt-1))/2;
    for(int i = 0; i < oddcnt; i++){
        for(int j = i+1; j < oddcnt; j++){
            if(__gcd(odd[i], odd[j]) > 1){
                ans++;
            }
        }
    }
    cout << ans << endl;
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
