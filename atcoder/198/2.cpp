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
    if(n == 0) return true;
    while(n % 10 == 0){
        n /= 10;
    }
    vector<int> d;
    while(n > 0){
        d.push_back(n%10);
        n /= 10;
    }
    n = d.size();
    f(i, 0, n/2){
        if(d[i] != d[n-1-i]){
            return false;
        }
    }
    return true;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        // solve();
        if(solve())
        	cout << "Yes" << endl;
        else
        	cout << "No" << endl;
    }
    return 0;
}