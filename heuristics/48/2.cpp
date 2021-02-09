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
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a(n);
    f(i, 0, n){
        a[i] = s[i] - '0';
    }
    vector<int> b(n+1);
    f(i, 0, n+1){
        if(i & 1){
            b[i] = 0;
        }else{
            b[i] = 1;
        }
    }
    int da = 0, db = 0;
    f(i, 0, n){
        if(a[i] != b[i]){
            da++;
        }
        if(a[i] != b[i+1]){
            db++;
        }
    }
    cout << min(da, db) << endl;
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