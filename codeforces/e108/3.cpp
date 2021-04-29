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
    vector<vector<int>> arr(n, vector<int>());
    vector<int> uni(n), scores(n);
    inputArray(uni);
    inputArray(scores);
    f(i, 0, n){
        arr[uni[i]-1].push_back(scores[i]);
    }
    int lim = n;
    sort(arr.begin(), arr.end(), [](const vector<int> & a, const vector<int> & b){ return a.size() > b.size(); });
    f(i, 0, n){
        if(arr[i].size() > 1){
            sort(arr[i].begin(), arr[i].end(), greater<int>());
        }
        for(int j = 1; j < arr[i].size(); j++){
            arr[i][j] += arr[i][j-1];
        }
        if(arr[i].size() == 0){
            lim = i;
            break;
        }
    }
    f(k, 1, n+1){
        int ans = 0;
        f(i, 0, n){
            if(arr[i].size() < k){
                break;
            }
            int left = arr[i].size()%k;
            ans += arr[i][arr[i].size()-left-1];
        }
        cout << ans << ' ';
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