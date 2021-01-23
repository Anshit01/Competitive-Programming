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
    string s;
    cin >> s;
    vector<int> b(n);
    f(i, 0, n){
        b[i] = s[i] - '0';
    }
    vector<int> a(n);
    a[0] = 1;
    f(i, 1, n){
        if(a[i-1] + b[i-1] == b[i] + 1){
            a[i] = 0;
        }else{
            a[i] = 1;
        }

    }
    f(i, 0, n){
        cout << a[i];
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