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

int fn(int n){
    vector<int> d;
    while(n > 0){
        d.push_back(n%10);
        n /= 10;
    }
    sort(d.begin(), d.end());
    int mx = 0, mn = 0;
    f(i, 0, d.size()){
        mn *= 10;
        mn += d[i];
    }
    f(i, d.size(), 0){
        mx *= 10;
        mx += d[i];
    }
    return mx - mn;
}

void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    f(i, 0, k){
        n = fn(n);
    }
    cout << n << endl;
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