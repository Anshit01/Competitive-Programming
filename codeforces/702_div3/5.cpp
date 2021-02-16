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
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    vector<int> a(arr);
    sort(a.begin(), a.end());
    int wini = 0;
    int sum = 0;
    f(i, 0, n){
        if(sum < a[i]){
            wini = i;
        }
        sum += a[i];
    }
    int lb = a[wini];
    vector<int> ans;
    f(i, 0, n){
        if(arr[i] >= lb){
            ans.push_back(i+1);
        }
    }
    cout << ans.size() << endl;
    for(int a : ans) {
        cout << a << ' ';
    }
    cout << endl;
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