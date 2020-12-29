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
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        bool oddNegative = false;
        int sum = 0;
        int mn = 1000;
        f(i, 0, n){
            f(j, 0, m){
                cin >> arr[i][j];
                sum += abs(arr[i][j]);
                mn = min(mn, abs(arr[i][j]));
                if(arr[i][j] < 0){
                    oddNegative = !oddNegative;
                }
            }
        }
        if(oddNegative){
            sum -= 2 * mn;
        }
        cout << sum << endl;
    }
}