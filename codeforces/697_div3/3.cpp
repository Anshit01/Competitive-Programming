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

int ca[(int)2e5+2], cb[(int)2e5+2];

void solve() {
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> ara(k), arb(k);
    f(i, 0, k){
        cin >> ara[i];
        ca[ara[i]]++;
    }
    f(i, 0, k){
        cin >> arb[i];
        cb[arb[i]]++;
    }
    int cnt = 0;
    f(i, 0, k){
        ca[ara[i]]--;
        cb[arb[i]]--;
        cnt += (k-i-1) - ca[ara[i]] - cb[arb[i]];
    }
    cout << cnt << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    f(i, 0, (int)2e5+2){
        ca[i] = 0;
        cb[i] = 0;
    }
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}