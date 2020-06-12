/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

pair<int, int> count(vector<vector<int>>& arr, int n, int m, int pos){
    int zeros = 0, ones = 0;
    int j = min(pos, m-1);
    int i = max(0, pos - j);
    while(j >= 0 && i < n){
        if(arr[i][j]){
            ones++;
        }else{
            zeros++;
        }
        if(arr[n-i-1][m-j-1]){
            ones++;
        }
        else{
            zeros++;
        }
        j--;
        i++;
    }
    return {zeros, ones};
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n, m;
    cin >> T;
    while(T--){
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        f(i, 0, n){
            f(j, 0, m){
                cin >> arr[i][j];
            }
        }
        int val;
        int ans = 0;
        f(i, 0, (n+m-1)/2){
            auto c = count(arr, n, m, i);
            if(c.first < c.second){
                ans += c.first;
            }else{
                ans += c.second;
            }
        }
        cout << ans << endl;
    }
}