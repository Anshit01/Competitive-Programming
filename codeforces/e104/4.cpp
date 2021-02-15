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

bool check(int a, int n){
    if(a % 2 == 0) a++;
    int b = (a*a)/2;
    if(b > n) return false;
    int d = a*a + b*b;
    int c = sqrt(d);
    if(c > n || c*c != d) return false;
    return true;
}

void solve() {
    int n;
    cin >> n;
    int l = 1, r = n;
    int ans = 0;
    int mid;
    while(l <= r){
        mid = (l+r)/2;
        if(check(mid, n)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    // if(ans == 1) ans = 2;
    cout << ans/2 << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int n = 1e7;
    // f(i, 0, n){
    //     if(check(i, 1e9)){
    //         cout << i << ' ';
    //     }
        
    // }
    // cout << endl;
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