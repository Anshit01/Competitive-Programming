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
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int mx = INT32_MIN, mn = INT32_MAX, sum = 0;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
            sum += arr[i];
        }
        int avg1 = sum / n;
        int avg2 = avg1 + 1;
        int ans1 = 0, ans2 = 0;
        if(mx - avg1 > avg1 - mn){
            ans1 -= mx - avg1;
        }else{
            ans1 -= avg1 - mn;
        }
        if(mx - avg2 > avg2 - mn){
            ans2 -= mx - avg2;
        }else{
            ans2 -= avg2 - mn;
        }
        f(i, 0, n){
            ans1 += abs(arr[i] - avg1);
            ans2 += abs(arr[i] - avg2);
        }
        ans1 = min(ans1, ans2);
        cout << ans1 << '\n';
    }
}