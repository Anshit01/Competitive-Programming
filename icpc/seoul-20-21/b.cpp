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

void solve() {
    vector<int> a(6), b(6);
    inputArray(a);
    inputArray(b);
    int sum = 0;
    f(i, 0, 6){
        f(j, 0, 6){
            if(a[j] > b[i]) sum++;
        }
    }
    if(sum == 0){
        cout << "0/1" << endl;
    }
    int div = 36;
    int g = __gcd(sum, div);
    cout << sum/g << '/' << div/g << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}