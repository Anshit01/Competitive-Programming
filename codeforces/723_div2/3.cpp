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
    priority_queue<int, vector<int>, greater<int>> q;
    vector<int> arr(n);
    inputArray(arr);
    int cnt = 0;
    int sum = 0;
    f(i, 0, n){
        sum += arr[i];
        cnt++;
        if(arr[i] < 0){
            q.push(arr[i]);
        }
        while(sum < 0){
            int h = q.top();
            sum -= h;
            cnt--;
            q.pop();
        }
    }
    cout << cnt << endl;
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