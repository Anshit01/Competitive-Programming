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
        vector<int> mp(200, 0);
        int a;
        f(i, 0, n){
            cin >> a;
            mp[a]++;
        }
        int ans = 0;
        f(s, 2, 2*n +1){
            int cnt = 0;
            
            f(i, 1, (s+1)/2){
                int tmp = min(mp[i], mp[s-i]);
                cnt += tmp;

            }
            if(s % 2 == 0){
                cnt += mp[s/2]/2;
            }
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
}