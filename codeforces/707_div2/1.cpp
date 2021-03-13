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
    vector<int> a(n), b(n), tm(n);
    f(i,0, n){
        cin >> a[i] >> b[i];
    }
    inputArray(tm);
    tm[0] += a[0];
    f(i, 1, n){
        tm[i] += a[i] - b[i-1];
    }
    int time = 0;
    f(i, 0, n-1){
        int ariv = time + tm[i];
        int dept = ariv + (b[i] - a[i] + 1)/2;
        if(b[i] > dept){
            dept = b[i];
        }
        time = dept;
    }
    time += tm[n-1];
    cout << time << endl;
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