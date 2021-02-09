/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<pair<int, int>> c(m);
    f(i, 0, m){
        cin >> c[i].first >> c[i].second;
    }
    int k;
    cin >> k;
    vector<vector<int>> p(k);
    int a, b;
    f(i, 0, k){
        cin >> a >> b;
        p[i] = {a, b};
    }
    int ans = 0;
    for(int i = 0; i < (1 << k); i++){
        f(j, 0, k){
            if(i & (1 < j)){

            }
        }
    }

}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}