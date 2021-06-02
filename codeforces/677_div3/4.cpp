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
    vector<int> arr(n);
    inputArray(arr);
    map<int, vector<int>> mp;
    f(i, 0, n){
        mp[arr[i]].push_back(i+1);
    }
    if(mp.size() == 1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    auto pr1 = *mp.begin();
    mp.erase(mp.begin());
    vector<int> ar1 = pr1.second;
    for(auto pr: mp){
        for(int x : pr.second){
            cout << ar1[0] << ' ' << x << endl;
        }
    }
    int b = mp.begin()->second[0];
    for(int i = 1; i < ar1.size(); i++){
        cout << ar1[i] << ' ' << b << endl;
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