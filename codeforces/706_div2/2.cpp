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
    int k;
    cin >> k;
    unordered_set<int> st;
    int mex = 0;
    int mx = 0;
    f(i, 0, n){
        int a;
        cin >> a;
        st.insert(a);
        mx = max(mx, a);
    }
    int ops = k;
    if(k == 0){
        cout << st.size() << endl;
        return;
    }
    while(st.count(mex)){
        mex++;
    }
    if(mex > mx){
        cout << st.size() + k << endl;
        return;
    }
    int ne = (mx + mex + 1) / 2;
    if(st.count(ne)){
        cout << st.size() << endl;
    }else{
        cout << st.size() + 1 << endl;
    }

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