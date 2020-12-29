/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
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
    int n, m;
    cin >> n;
    vector<int> an(n);
    inputArray(an);
    cin >> m;
    vector<int> am(m);
    inputArray(am);
    int maxn = 0, maxm = 0;
    int sumn = 0, summ = 0;
    f(i, 0, n){
        sumn += an[i];
        maxn = max(maxn, sumn);
    }
    f(i, 0, m){
        summ += am[i];
        maxm = max(maxm, summ);
    }
    cout << maxn + maxm << endl;
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