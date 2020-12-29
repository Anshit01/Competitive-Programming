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
    int q;
    cin >> q;
    vector<pair<int, vector<int>>> a(n+1, {0, vector<int>()});
    int l, r;
    f(i, 0, q){
        cin >> l >> r;
        a[l].first++;
        a[r].second.push_back(l);
    }
    int destroy = 0;
    int active = 0;
    f(i, 1, n+1){
        auto pr = a[i];
        active += pr.first;
        destroy += active;
        cout << destroy << ' ';
        for(int li : pr.second){
            destroy -= i - li + 1;
            active--;
        }
    }
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}