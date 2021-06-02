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
    string s;
    cin >> s;
    int prevx = -k;
    int prevs = 0;
    int ans = 0;
    f(i, 0, n){
        if(s[i] == '*'){
            prevs = i;
            if(i - prevx >= k){
                s[i] = 'X';
                ans++;
                prevx = i;
            }
        }else{
            if(prevx != -k && i - prevx >= k && s[prevs] != 'X'){
                s[prevs] = 'X';
                ans++;
                prevx = prevs;
            }
        }
    }
    if(s[prevs] != 'X'){
        ans++;
        s[prevs] = 'X';
    }
    cout << ans << endl;
    // cout << s << endl;
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