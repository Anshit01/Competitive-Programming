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
    vector<vector<int>> a(n, vector<int>(n)), b(n, vector<int>(n));
    vector<int> cr(n), cc(n);
    vector<pair<int, int>> toFind;
    f(i, 0, n){
        f(j, 0, n){
            cin >> a[i][j];
            if(a[i][j] == -1){
                toFind.push_back({i, j});
            }
        }
    }
    sort(toFind.begin(), toFind.end());
    f(i, 0, n){
        f(j, 0, n){
            cin >> b[i][j];
        }
    }
    f(i, 0, n){
        cin >> cr[i];
    }
    f(i, 0, n){
        cin >> cc[i];
    }
    int ans = INT64_MAX;
    do{
        vector<vector<int>> aa(a);
        int hrs = 0;
        for(auto pr : toFind){
            int i = pr.first;
            int j = pr.second;
            bool flag = true;
            f(k, 0, n){
                if(i != k && aa[k][j] == -1){
                    flag = false;
                }
            }
            if(flag){
                aa[i][j] = 0;
                continue;
            }
            flag = true;
            f(k, 0, n){
                if(j != k && aa[i][k] == -1){
                    flag = false;
                }
            }
            if(flag){
                aa[i][j] = 0;
                continue;
            }
            aa[i][j] = 0;
            hrs += b[i][j];
        }
        ans = min(hrs, ans);
    }while(next_permutation(toFind.begin(), toFind.end()));
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    f(t, 1, T+1){
        cout << "Case #" << t << ": ";
        solve();
        // if(solve())
        // 	cout << "YES" << endl;
        // else
        // 	cout << "NO" << endl;
    }
    return 0;
}