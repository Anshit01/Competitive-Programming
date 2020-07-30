/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        int k, z;
        cin >> k >> z;
        vector<int> arr(n);
        vector<int> pre(n+1);
        pre[0] = 0;
        f(i, 0, n){
            cin >> arr[i];
            pre[i+1] = pre[i] + arr[i];
        }
        vector<pair<int, int>> pairSum(n-1);
        f(i, 1, n){
            pairSum[i-1] = {arr[i-1] + arr[i], i};
        }
        sort(pairSum.begin(), pairSum.end(), greater<pair<int, int>>());
        int curPair = 0;
        int ans = 0;
        int totalLeftMoves = min(z, k/2);
        f(i, 0, totalLeftMoves + 1){
            int sum = pre[k - 2*i + 1];
            while(pairSum[curPair].second > k - 2*i + 1){
                curPair++;
            }
            sum += i * pairSum[curPair].first;
            ans = max(sum, ans);
        }
        cout << ans << endl;
    }
}