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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    inputArray(arr);
    set<int> st;
    f(i, 0, n){
        st.insert(arr[i]);
    }
    map<int, int> ans;
    bool f1 = true, f2 = true;
    while(!st.empty()){
        int x = *st.begin();
        if(2*x != a && st.count(a-x)){
            ans[x] = 0;
            ans[a-x] = 0;
            st.erase(x);
            st.erase(a-x);
        }else if(2*x != b && st.count(b-x)){
            ans[x] = 1;
            ans[b-x] = 1;
            st.erase(x);
            st.erase(b-x);
        }else{
            f1 = false;
            break;
        }
    }
    while(!st.empty()){
        int x = *st.begin();
        if(2*x != b && st.count(b-x)){
            ans[x] = 1;
            ans[b-x] = 1;
            st.erase(x);
            st.erase(b-x);
        }else if(2*x != a && st.count(a-x)){
            ans[x] = 0;
            ans[a-x] = 0;
            st.erase(x);
            st.erase(a-x);
        }else{
            f2 = false;
            break;
        }
    }
    if(f1 || f2){
        cout << "YES" << endl;
        f(i, 0, n){
            cout << ans[arr[i]] << ' ';
        }
        cout << endl;
    }else{
        cout << "NO" << endl;
    }
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