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
    string s;
    cin >> s;
    set<string> st;
    f(i, 0, n){
        st.insert({s[i]});
    }
    f(i, 0, n-1){
        st.insert({s[i], s[i+1]});
    }
    f(i, 0, n-2){
        st.insert({s[i], s[i+1], s[i+2]});
    }
    string t;
    f(i, 0, 26){
        t = string({char(i+'a')});
        if(st.count(t) == 0){
            cout << t << endl;
            return;
        }
    }
    f(i, 0, 26){
        f(j, 0, 26){
            t =  string({char(i+'a'), char(j+'a')});
            if(st.count(t) == 0){
                cout << t << endl;
                return;
            }
        }
    }
    f(i, 0, 26){
        f(j, 0, 26){
            f(k, 0, 26){
                t =  string({char(i+'a'), char(j+'a'), char(k+'a')});
                if(st.count(t) == 0){
                    cout << t << endl;
                    return;
                }
            }
        }
    }
    assert(false);
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