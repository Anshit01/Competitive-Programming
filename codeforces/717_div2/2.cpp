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

bool solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    int x = 0;
    f(i, 0, n){
        x ^= arr[i];
    }
    if(x == 0){
        return true;
    }
    int l = 0;
    int xl = 0;
    f(i, 0, n){
        xl ^= arr[i];
        if(xl == x){
            l = i;
            break;
        }
    }
    int r = 0;
    int xr = 0;
    f(i, l+1, n){
        xr ^= arr[i];
        if(xr == x){
            return true;
        }
    }
    return false;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        // solve();
        if(solve())
        	cout << "YES" << endl;
        else
        	cout << "NO" << endl;
    }
    return 0;
}