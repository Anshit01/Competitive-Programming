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
    vector<int> a(n);
    inputArray(a);
    vector<int> cntarr(401, 0);
    auto cntelt = [&](int a){
        return cntarr[a+200];
    };
    f(i, 0, n){
        cntarr[a[i] + 200]++;
    }
    int ans = 0;
    f(i, -200, 201){
        f(j, i+1, 201){
            int diff = abs(i - j);
            ans += (cntelt(i) * cntelt(j)) * diff * diff;
        }
    }
    cout << ans << endl;
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