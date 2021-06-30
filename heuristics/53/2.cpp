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
    string s;
    cin >> s;
    int n = s.size();
    vector<int> arr(26, 1);
    f(i, 0, n){
        arr[s[i] - 'a'] = 0;
    }
    int sum = 0;
    f(i, 0, 26){
        sum += (i+1) * arr[i];
    }
    bool flag = false;
    if(sum % 3 == 0) flag = true;
    while(sum > 0){
        int d = sum % 10;
        sum /= 10;
        if(d == 3) flag = true;
    }
    if(!flag) cout << "not ";
    cout << "yummy" << endl;
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