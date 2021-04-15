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
    int n, l, r, s;
    cin >> n >> l >> r >> s;
    int d = r - l + 1;
    set<int> st;
    f(i, 1, n+1){
        st.insert(i);
    }
    int minsum = (d*(d+1))/2;
    int maxsum = minsum + d * (n - d);
    if(s < minsum || s > maxsum){
        cout << -1 << endl;
        return;
    }
    int a = 1;
    vector<int> seq;
    
    vector<int> remain;
    for(int a : st){
        remain.push_back(a);
    }
    f(i, 0, remain.size()){
        if(i == l){
            f(j, 0, seq.size()){
                cout << seq[j] << ' ';
            }
        }
        cout << remain[i] << ' ';
    }
    cout << endl;
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