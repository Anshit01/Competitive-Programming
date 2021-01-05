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

int xfactor(int a, int x){
    int ans = 0;
    while(a % x == 0){
        ans++;
        a /= x;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> arr(n);
    inputArray(arr);
    int minxfactor = 100;
    int minxfactorpos = 0;
    f(i, 0, n){
        int xf = xfactor(arr[i], x);
        if(xf < minxfactor){
            minxfactor = xf;
            minxfactorpos = i;
        }
    }
    int ans = 0;
    f(i, 0, n){
        ans += arr[i] * (minxfactor + 1);
        if(i < minxfactorpos){
            ans += arr[i];
        }
    }
    cout << ans << endl;
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