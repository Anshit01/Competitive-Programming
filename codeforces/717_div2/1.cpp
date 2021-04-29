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

void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    inputArray(arr);
    int i = 0;
    int sum = 0;
    f(i, 0, n-1){
        sum += arr[i];
    }
    if(sum <= k){
        f(i, 0, n-1){
            cout << 0 << ' ';
        }
        cout << sum + arr[n-1] << endl;
        return;
    }
    while(k > 0){
        if(arr[i] > k){
            arr[i] -= k;
            arr[n-1] += k;
            k -= k;
            i++;
        }else{
            arr[n-1] += arr[i];
            k -= arr[i];
            arr[i] = 0;
            i++;
        }
    }
    printArray(arr);
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
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