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

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> arr(n);
        inputArray(arr);
        int ans = 0;
        f(i, 1, n){
            ans += abs(arr[i] - arr[i-1]);
        }
        int ded = abs(arr[0] - arr[1]);
        ded = max(ded, abs(arr[n-1] - arr[n-2]));
        f(i, 0, n-2){
            ded = max(ded, abs(arr[i] - arr[i+1]) + abs(arr[i+1] - arr[i+2]) - abs(arr[i] - arr[i+2]));
        }
        cout << ans - ded << endl;
    }
}