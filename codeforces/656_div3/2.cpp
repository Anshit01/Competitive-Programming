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
        vector<int> arr(2*n);
        f(i, 0, 2 * n){
            cin >> arr[i];
        }
        vector<int> cnt(n, 0);
        f(i, 0, 2*n){
            if(cnt[arr[i] - 1] == 0){
                cnt[arr[i] - 1] = 1;
                cout << arr[i] << ' ';
            }
        }
        cout << endl;
    }
}