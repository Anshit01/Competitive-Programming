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

int solve() {
    int n;
    cin >> n;
    int l = 1, r = n, mid;
    map<pair<int, int>, int> queryResult;
    auto get = [&](int l, int r) -> int {
        if(queryResult.count({l, r})){
            return queryResult[{l, r}];
        }
        cout << "? " << l << ' ' << r << endl;
        cout.flush();
        int a;
        cin >> a;
        queryResult[{l, r}] = a;
        return a;
    };
    
    while(l < r){
        mid = (l+r)/2;
        
        
    }
    return l;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        int ans = solve();
        cout << "! " << ans << endl;
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}