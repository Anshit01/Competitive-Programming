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
    freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<int> arr(2*n);
    inputArray(arr);
    vector<vector<int>> lst(5001, vector<int>());
    f(i, 0, 2*n){
        lst[arr[i]].push_back(i+1);
    }
    vector<pair<int, int>> ans;
    f(i, 0, 5001){
        if(lst[i].size() % 2 == 0){
            for(int j = 0; j < lst[i].size(); j += 2){
                ans.push_back({lst[i][j], lst[i][j+1]});
            }
        }else{
            cout << -1 << endl;
            return;
        }
    }
    for(auto pr : ans){
        cout << pr.first << ' ' << pr.second << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
