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
    s = s;
    int d = 0;
    f(i, 0, n-1){
        if(s[i] == s[i+1]){
            d++;
        }
        d++;
    }
    f(i, 0, k){
        int q;
        cin >> q;
        q--;
        s[q] = !(s[q] - '0') + '0';
        if(q != 0){
            if(s[q] == s[q-1]){
                d++;
            }else{
                d--;
            }
        }
        if(q != n-1){
            if(s[q] == s[q+1]){
                d++;
            }else{
                d--;
            }
        }
        cout << d << endl;
    }
    // cout << d << endl;
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