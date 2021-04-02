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
    int mxprime = 1;
    if(n % 2 == 0) mxprime = 2;
    while(n > 1){
        int n1 = n;
        if(n % 2 == 0){
            n /= 2;
            continue;
        }
        bool flag = true;
        for(int i = 3; i*i <= n; i+= 2){
            if(n%i == 0){
                n /= i;
                mxprime = max(mxprime, i);
                flag = false;
                continue;
            }
        }
        if(flag){
            mxprime = n1;
            break;
        }
    }
    cout << mxprime << endl;
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