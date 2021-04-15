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
    vector<string> mat(n);
    f(i, 0, n){
        cin >> mat[i];
    }
    vector<pair<int, int>> pts;
    f(i, 0, n){
        f(j, 0, n){
            if(mat[i][j] == '*'){
                pts.push_back({i, j});
            }
        }
    }
    mat[pts[0].first][pts[1].second] = '*';
    mat[pts[1].first][pts[0].second] = '*';
    if(pts[0].first == pts[1].first){
        if(pts[0].first == 0){
            mat[1][pts[0].second] = '*';
            mat[1][pts[1].second] = '*';
        }else{
            mat[0][pts[0].second] = '*';
            mat[0][pts[1].second] = '*';
        }
    }
    if(pts[0].second == pts[1].second){
        if(pts[0].second == 0){
            mat[pts[0].first][1] = '*';
            mat[pts[1].first][1] = '*';
        }else{
            mat[pts[0].first][0] = '*';
            mat[pts[1].first][0] = '*';
        }
    }
    f(i, 0, n){
        cout << mat[i] << endl;
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