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

struct data {
    vector<int> pos;
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    inputArray(a);
    map<int, vector<int>> mp;
    vector<int> ans(n, -1);
    f(i, 0, n){
        for(auto itr = mp.begin(); itr != mp.end() && (*itr).first < a[i]; ){
            vector<int> pos = (*itr).second;
            for(int i : pos){
                ans[i] = pos.size() - 1;
            }
            auto todelete = itr;
            itr++;
            mp.erase(todelete);
        }
        if(mp.find(a[i]) == mp.end()){
            mp[a[i]] = vector<int>();
        }
        mp[a[i]].push_back(i);

    }
    for(auto pr: mp){
        vector<int> pos = pr.second;
        for(int i : pos){
            ans[i] = pos.size() - 1;
        }
    }
    printArray(ans);
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