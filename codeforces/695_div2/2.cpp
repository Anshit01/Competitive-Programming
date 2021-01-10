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

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    vector<int> peak(n, 0);
    int cnt = 0;
    int mincnt = 0;
    auto getPeak = [&](int i) {
        if(i <= 0 || i >= n-1){
            return 0;
        }
        if(arr[i] > max(arr[i-1], arr[i+1])){
            return 1;
        }
        if(arr[i] < min(arr[i-1], arr[i+1])){
            return -1;
        }
        return 0;
    };
    f(i, 0, n){
        peak[i] = getPeak(i);
        if(peak[i] != 0){
            cnt++;
        }
    }
    mincnt = cnt;
    f(i, 1, n-1){
        int oldpeaks = abs(peak[i-1]) + abs(peak[i]) + abs(peak[i+1]);
        int tmp = arr[i];
        arr[i] = arr[i-1];
        int newpeaks1 = abs(getPeak(i-1)) + abs(getPeak(i)) + abs(getPeak(i+1));
        arr[i] = arr[i+1];
        int newpeaks2 = abs(getPeak(i-1)) + abs(getPeak(i)) + abs(getPeak(i+1));
        mincnt = min(mincnt, min(cnt - oldpeaks + newpeaks1, cnt - oldpeaks + newpeaks2));
        arr[i] = tmp;
    }
    cout << max(0ll, mincnt) << endl;

}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}