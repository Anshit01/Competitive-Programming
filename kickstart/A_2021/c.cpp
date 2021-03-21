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

struct S{
    int val, i, j;
};

struct cmp{
    bool operator()(const S& a, const S& b) const{
        if(a.val > b.val){
            return true;
        }else if(a.val == b.val && (a.i < b.i || (a.i == b.i && a.j < b.j))){
            return true;
        }
        return false;
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    set<S, cmp> st;
    vector<vector<int>> grid(n, vector<int>(m));
    f(i, 0, n){
        f(j, 0, m){
            cin >> grid[i][j];
            st.insert({grid[i][j], i, j});
        }
    }
    auto fix = [&](int mxval, int i, int j){
        if(i >= 0 && i < n && j >= 0 && j < m && grid[i][j] < mxval - 1){
            int diff = mxval - grid[i][j] - 1;
            st.erase({grid[i][j], i, j});
            grid[i][j] = mxval - 1;
            st.insert({grid[i][j], i, j});
            return diff;
        }
        return 0ll;
    };
    int ans = 0;
    while(!st.empty()){
        auto mx = *st.begin();
        ans += fix(mx.val, mx.i - 1, mx.j);
        ans += fix(mx.val, mx.i, mx.j - 1);
        ans += fix(mx.val, mx.i + 1, mx.j);
        ans += fix(mx.val, mx.i, mx.j + 1);
        st.erase(st.begin());
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    f(t, 1, T+1){
        cout << "Case #" << t << ": ";
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}