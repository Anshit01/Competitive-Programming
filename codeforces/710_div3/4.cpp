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

struct comp {
    bool operator() (const pair<int, int>& a, const pair<int, int>& b) {
        if(a.first > b.first) return true;
        if(a.first == b.first && a.second < b.second) return true;
        return false;
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    inputArray(arr);
    map<int, int> mp;
    f(i, 0, n){
        mp[arr[i]]++;
    }
    set<pair<int, int>, comp> st;
    for(auto pr: mp){
        st.insert({pr.second, pr.first});
    }
    int ans = n;
    while(st.size() > 1){
        auto pr1 = *st.begin();
        st.erase(st.begin());
        auto pr2 = *st.begin();
        st.erase(st.begin());
        ans -= 2;
        if(pr1.first > 1){
            st.insert({pr1.first-1, pr1.second});
        }
        if(pr2.first > 1){
            st.insert({pr2.first - 1, pr2.second});
        }
    }
    cout << ans << endl;
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