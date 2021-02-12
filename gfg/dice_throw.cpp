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

int ways(int M, int N, int X) {
    vector<vector<int>> dp(N+1, vector<int>(X+1, 0));
    dp[0][0] = 1;
    for(int i = 1; i <= N; i++){
        for(int d = 1; d <= M; d++){
            for(int j = 1; j <= X; j++){
                if(j >= d){
                    dp[i][j] += dp[i-1][j-d];
                }
            }
        }
    }
    return dp[N][X];
}

void solve() {
    int n;
    cin >> n;
    
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