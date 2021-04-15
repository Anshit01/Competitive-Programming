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
    int a, b;
    int n;
    cin >> a >> b;
    n = a+b;
    string s;
    cin >> s;
    f(i, 0, n/2){
        if(s[i] == '?'){
            s[i] = s[n-i-1];
        }else if(s[n-i-1] == '?'){
            s[n-i-1] = s[i];
        }else{
            if(s[i] != s[n-i-1]){
                cout << -1 << endl;
                return;
            }
        }
    }
    int cntq = 0;
    f(i, 0, n){
        if(s[i] == '?'){
            cntq++;
        }else if(s[i] == '0'){
            a--;
        }else{
            b--;
        }
    }
    if(a > cntq || b > cntq){
        cout << -1 << endl;
        return;
    }
    if(cntq % 2 == 1){
        if(a % 2 == 1){
            cntq--;
            a--;
            s[n/2] = '0';
        }else if(b % 2 == 1){
            cntq--;
            b--;
            s[n/2] = '1';
        }
    }
    if(b % 2 == 1 || a % 2 == 1){
        cout << -1 << endl;
        return;
    }
    f(i, 0, n/2){
        if(s[i] == '?'){
            cntq -= 2;
            if(a > 0){
                s[i] = '0';
                s[n - i - 1] = '0';
                a -= 2;
            }else{
                s[i] = '1';
                s[n - i -1] = '1';
                b -= 2;
            }
        }
    }
    cout << s << endl;
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