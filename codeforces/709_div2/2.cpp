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

bool isconstDec(vector<int>& a){
    int d = a[0] - a[1];
    if(d <= 0) return false;
    f(i, 1, a.size()-1){
        if(a[i] - a[i+1] != d){
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    inputArray(a);
    int c = -1;
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    if(isconstDec(a)){
        cout << 0 << endl;
        return;
    }
    f(i, 0, n-1){
        if(a[i] <= a[i+1]){
            if(c == -1){
                c = a[i+1] - a[i];
            }else{
                if(c != a[i+1] - a[i]){
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    if(c == -1){
        cout << -1 << endl;
        return;
    }
    int m = -1;

    f(i, 0, n-1){
        if(a[i] > a[i+1]){
            if(m == -1){
                m = a[i] + c - a[i+1];
            }else{
                if((a[i] + c) % m != a[i+1]){
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    if(m == -1){
        cout << 0 << endl;
        return;
    }
    if(a[0] >= m){
        cout << -1 << endl;
        return;
    }
    f(i, 1, n){
        if(a[i] != (a[i-1] + c)%m){
            cout << -1 << endl;
            return;
        }
    }
    cout << m << ' ' << c << endl;
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