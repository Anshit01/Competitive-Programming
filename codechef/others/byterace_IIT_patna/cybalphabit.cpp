/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
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
    if(n > k){
        cout << -1 << endl;
        return;
    }
    if(n == k){
        f(i, 0, k){
            cout << 'a';
        }
        cout << endl;
        return;
    }
    multiset<int, greater<int>> st;
    for(int i = 0; (1 << i) <= k; i++){
        if(k & (1 << i)){
            st.insert(1 << i);
        }
    }
    if(n < st.size()){
        cout << -1 << endl;
        return;
    }
    // for(int x : st){
    //     cout << x << endl;
    // }
    while(st.size() < n){
        int a = *st.begin();
        st.insert(a/2);
        st.insert(a/2);
        st.erase(st.lower_bound(a));
    }
    for(int a : st){
        cout << (char)(log2(a) + 'a');
    }
    cout << endl;
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