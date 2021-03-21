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

struct Cell {
    int u = 0, d = 0, l = 0, r = 0;
};

int calc(int a, int b){
    int x = max(min(a/2, b) - 1, 0ll);
    int y = max(min(b/2, a) - 1, 0ll);
    return x + y;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> grid(n+2, vector<bool>(m+2, 0));
    f(i, 1, n+1){
        f(j, 1, m+1){
            int a;
            cin >> a;
            grid[i][j] = a;
        }
    }
    vector<vector<Cell>> dp(n+2, vector<Cell>(m+2));
    f(i, 1, n+1){
        f(j, 1, m+1){
            if(grid[i][j]){
                dp[i][j].u = dp[i][j-1].u + 1;
                dp[i][j].l = dp[i-1][j].l + 1;
            }
        }
    }
    f(i, n+1, 1){
        f(j, m+1, 1){
            if(grid[i][j]){
                dp[i][j].d = dp[i][j+1].d + 1;
                dp[i][j].r = dp[i+1][j].r + 1;
            }
        }
    }
    int ans = 0;
    f(i, 1, n+1){
        f(j, 1, m+1){
            Cell c = dp[i][j];
            ans += calc(c.l, c.u);
            ans += calc(c.l, c.d);
            ans += calc(c.r, c.u);
            ans += calc(c.r, c.d);
        }
    }
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