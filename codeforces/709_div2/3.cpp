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
    int m;
    cin >> m;
    vector<vector<int>> arrs(m);
    vector<pair<int, int>> ks(m);
    f(i, 0, m){
        int k;
        cin >> k;
        vector<int> arr(k);
        int x;
        f(i, 0, k){
            cin >> x;
            arr[i] = x-1;
        }
        ks[i] = {k, i};
        arrs[i] = arr;
    }
    sort(ks.begin(), ks.end());
    vector<int> ans(m, -1);
    vector<int> fcnt(n, 0);
    int lim = (m+1)/2;
    f(i, 0, m){
        int ind = ks[i].second;
        auto frnds = arrs[ind];
        for(int frnd : frnds){
            if(fcnt[frnd] < lim){
                ans[ind] = frnd;
                fcnt[frnd]++;
                break;
            }
        }
        if(ans[ind] == -1){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    f(i, 0, m){
        cout << ans[i] + 1 << ' ';
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