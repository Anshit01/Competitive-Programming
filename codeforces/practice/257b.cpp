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
    int n, m;
    cin >> n >> m;
    vector<int> s;
    if(n < m){
        swap(n, m);
    }
    s.push_back(1);
    int len = n+m;
    f(i, 1, len){
        if(m == 0){
            s.push_back(1);
        }else{
            if(i % 2 == 1){
                s.push_back(!s[i-1]);
            }else{
                s.push_back(s[i-1]);
            }
            if(s[i] == 1){
                n--;
            }else{
                m--;
            }
        }
    }
    printArray(s);
    int ans1 = 0, ans2 = 0;
    f(i, 0, len-1){
        if(s[i] == s[i+1]){
            ans1++;
        }else{
            ans2++;
        }
    }
    cout << ans1 << ' ' << ans2 << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}