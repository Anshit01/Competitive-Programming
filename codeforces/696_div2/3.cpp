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

vector<pair<int, int>> check(multiset<int, greater<int>> st, int x){
    vector<pair<int, int>> ans;
    while(!st.empty()){
        int a = *st.begin();
        st.erase(st.begin());
        auto itr = st.find(x-a);
        if(itr == st.end()){
            return {};
        }
        x = max(a, *itr);
        ans.push_back({a, *itr});
        st.erase(itr);
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(2*n);
    int n2 = 2*n;
    inputArray(arr);
    sort(arr.begin(), arr.end());
    multiset<int, greater<int>> st;
    for(int a : arr){
        st.insert(a);
    }
    int k;
    f(i, n2 - 1, 0){
        int x = arr[n2-1] + arr[i];
        auto ans = check(st, x);
        if(!ans.empty()){
            cout << "YES" << endl;
            cout << x << endl;
            for(auto pr : ans){
                cout << pr.first << ' ' << pr.second << endl;
            }
            return;
        }
    }
    cout << "NO" << endl;
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