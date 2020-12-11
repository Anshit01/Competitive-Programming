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

int n, m;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        cin >> n;
        cin >> m;
        char c;
        vector<vector<int>> arr(n+1, vector<int>(m+2, 0));
        f(i, 0, n){
            f(j, 1, m+1){
                cin >> c;
                if(c == '*'){
                    arr[i][j] = 1;
                }else{
                    arr[i][j] = 0;
                }
            }
        }
        int ans = 0;
        f(i, n, 0){
            f(j, 1, m+1){
                if(arr[i][j] == 1){
                    arr[i][j] += min(arr[i+1][j], min(arr[i+1][j-1], arr[i+1][j+1]));
                    ans += arr[i][j];
                }
            }
        }
        cout << ans << endl;
    }
}