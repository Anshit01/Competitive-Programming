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

void solve() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    inputArray(arr);
    multiset<int, greater<int>> st;
    f(i, 0, n){
        st.insert(arr[i]);
    }
    int cnt = 0;
    while(!st.empty()){
        auto top = st.begin();
        int f = *top;
        st.erase(top);
        if(f >= k){
            cnt++;
        }else{
            if(st.empty()){
                break;
            }
            auto it = st.lower_bound(k - f);
            if(it == st.end()){
                it--;
            }
            if(f + *it >= k){
                cnt++;
                st.erase(it);
            }else if(it != st.begin()){
                it--;
                cnt++;
                st.erase(it);
            }else{
                break;
            }
        }
    }
    cout << cnt << endl;
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