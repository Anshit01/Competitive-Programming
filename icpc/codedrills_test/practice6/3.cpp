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

struct Dsu {
    vector<int> par, sz;

    Dsu(int n) {
        par.resize(n + 1);
        iota(par.begin(), par.end(), 0);
        sz.resize(n + 1, 1);
    }

    int find(int x) {
        return (x == par[x] ? x : par[x] = find(par[x]));
    }

    void merge(int a, int b) {
        a = find(a); 
        b = find(b);
        if (sz[a] < sz[b]) {
            swap(a, b);
        }
        sz[a] += sz[b];
        par[b] = a;
    }

    bool same(int a, int b) {
        return find(a) == find(b);
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    vector<int> sarr(arr);
    sort(sarr.begin(), sarr.end());
    Dsu dsu(n);
    f(i, 1, n+1){
        for(int j = 2; j*j*i <= n; j++){
            dsu.merge(i, j*j*i);
        }
    }
    unordered_map<int, vector<int>> mp;
    f(i, 1, n+1){
        mp[dsu.find(i)].push_back(i);
    }
    for(auto pr : mp){
        auto inds = pr.second;
        vector<int> ar(inds.size()), sar(inds.size());
        for(int i = 0; i < inds.size(); i++){
            ar[i] = arr[inds[i]-1];
            sar[i] = sarr[inds[i]-1];
        }
        sort(ar.begin(), ar.end());
        sort(sar.begin(), sar.end());
        f(i, 0, ar.size()){
            if(ar[i] != sar[i]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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