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

bool possible(int v, int n, int k){
    int sum = 0;
    while(v > 0){
        sum += v;
        v /= k;
    }
    if(sum >= n){
        return true;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int l = 1;
    int r = n;
    int mid;
    int ans = n;
    while(l <= r){
        mid = l + (r-l)/2;
        if(possible(mid, n, k)){
            r = mid - 1;
            ans = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << ans << endl;
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