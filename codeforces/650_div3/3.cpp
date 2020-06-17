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
        int k;
        cin >> k;
        string s;
        cin >> s;
        int ans = 0;
        int l = -1, r;
        int i = 0;
        while(i < n && s[i] != '1'){
            i++;
        }
        ans = i / (k+1);
        if(i == n){
            i += k;
            ans = i /(k+1);
            cout << ans << endl;
            continue;
        }
        l = i;
        i++;
        for(; i < n; i++){
            if(s[i] == '1'){
                r = i;
                int dist = max(r - l - 1 - k, 0);
                ans += dist/(k+1);
                l = i;
            }
        }
        ans += (n-l-1)/(k+1);
        cout << ans << endl;
    }
}