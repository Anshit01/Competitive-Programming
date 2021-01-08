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

bool inInterval(int a, int l, int r){
    if(l > r){
        swap(l, r);
    }
    if(l < a && r > a){
        return true;
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    vector<int> peak(n, 0);
    int cnt = 0;
    int32_t ans = 0;
    f(i, 1, n-1){
        if(arr[i] > max(arr[i+1], arr[i-1])){
            peak[i] = 1;
            cnt++;
            ans = 1;
        }else if(arr[i] < min(arr[i+1], arr[i-1])){
            peak[i] = -1;
            cnt++;
            ans = 1;
        }
    }
    f(i, 1, n-1){
        if(peak[i] == 1 && peak[i-1] == -1 && peak[i+1] == -1){
            ans = 3;
        }else if(peak[i] == -1 && peak[i-1] == 1 && peak[i+1] == 1){
            ans = 3;
        }else if(abs(peak[i] - peak[i+1]) == 2){
            if(i-1 == 0 || i+2 == n-1){
                ans = max(ans, 2);
            }else if(i+2 < n && inInterval(arr[i-1], arr[i], arr[i+1]) && inInterval(arr[i+2], arr[i], arr[i+1])){
                ans = max(ans, 1);
            }else{
                ans = max(ans, 2);
            }
        }
    }
    cout << cnt - ans << endl;

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