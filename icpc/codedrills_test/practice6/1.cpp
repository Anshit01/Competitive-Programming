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

bool cmp(pair<int, int>& a, pair<int, int>& b){
    if(a.first > b.first) return true;
    if(a.first == b.first && a.second < b.second) return true;
    return false;
}

void solve() {
    int n, m, t;
    cin >> n >> m >> t;
    vector<int> p(n), at(m), am(m);
    vector<pair<int, int>> a(m);
    inputArray(p);
    inputArray(at);
    inputArray(am);
    f(i, 0, m){
        a[i] = {am[i], at[i]};
    }
    sort(p.begin(), p.end());
    sort(a.begin(), a.end(), cmp);
    f(i, 0, m/2){
        t -= a[i].second;
    }
    int ans = 0;
    f(i, 0, n){
        if(t - p[i] >= 0){
            t -= p[i];
            ans++;
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