/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
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

void rec(map<pair<int, int>, pair<int, bool>>& dp, vector<vector<int>>& xpts, vector<vector<int>>& ypts, bool findx, int time, int x, int y){
    if(time < dp[{x, y}].first){
        dp[{x, y}].first = time;
    }
    if(dp[{x, y}].second == false){
        if(findx){
            for(int xi : xpts[y]){
                // rec(dp, xpts, ypts, false, )
                
            }
        }else{
            for(int yi : ypts[x]){

            }
        }
    }
}

int solve() {
    int n;
    cin >> n;
    int k, x, y;
    cin >> k >> x >> y;
    if(x == 1 && y == 1){
        return 0;
    }
    vector<vector<int>> xpts(n+1, vector<int>());
    vector<vector<int>> ypts(n+1, vector<int>());
    map<pair<int, int>, pair<int, bool>> dp;
    int a, b;
    f(i, 0, k){
        cin >> a >> b;
        dp[{a, b}] = {INT32_MAX, false};
        xpts[b].push_back(a);
        ypts[a].push_back(b);
    }
    rec(dp, xpts, ypts, true, 0, 1, 1);
    rec(dp, xpts, ypts, false, 0, 1, 1);
    if(dp[{x, y}].first != INT32_MAX){
        return dp[{x, y}].first;
    }else{
        return -1;
    }
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int ans = solve();
        if(ans == -1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
    return 0;
}