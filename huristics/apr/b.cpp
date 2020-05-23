#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int ans[k];
        f(i, 0, k){
            ans[i] = 0;
        }
        string s;
        f(i, 0, n){
            cin >> s;
            int len = s.length();
            for(int j = 0; j < len; j++){
                ans[k-j-1] = (s[len - j - 1] - '0') | ans[k - j - 1];
            }
        }
        f(i, 0, k){
            cout << ans[i];
        }
        cout << endl;
    }
}