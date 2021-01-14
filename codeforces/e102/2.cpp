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

int repString(string s){
    int n = s.size();
    f(i, 1, n+1){
        bool flag = true;
        if(n % i != 0){
            continue;
        }
        f(j, 0, n){
            if(s[j] != s[j%i]){
                flag = false;
            }
        }
        if(flag){
            return i;
        }
    }
    return n;
}

void solve() {
    string a, b;
    cin >> a >> b;
    int n = repString(a);
    int m = repString(b);
    if(n == m){
        bool flag = true;
        f(i, 0, n){
            if(a[i] != b[i]){
                flag = false;
            }
        }
        if(flag){
            int ar = a.size()/n;
            int br = b.size()/n;
            int cnt = (ar*br)/__gcd(ar, br);
            f(i, 0, cnt){
                f(j, 0, n){
                    cout << a[j];
                }
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
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