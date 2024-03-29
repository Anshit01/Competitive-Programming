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
    int k;
    cin >> k;
    vector<int> a(n);
    inputArray(a);
    int sum = 0;
    f(i, 0, n){
        if(a[i]) sum++;
    }
    int minsum = 0;
    f(i, 0, k){
        minsum += a[i];
    }
    int cursum = minsum;
    f(i, k, n){
        cursum += a[i] - a[i-k];
        minsum = min(minsum, cursum);
    }
    int ans = (minsum*(minsum+1))/2;
    ans += sum - minsum;
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