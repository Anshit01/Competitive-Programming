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
        vector<int> mp(101, 0);
        int a, l = 100, r = 0;
        
        f(i, 0, n){
            cin >> a;
            mp[a]++;
            r = max(r, a);
            l = min(l, a);
        }
        bool flag = true;
        f(i, l, r+1){
            if(mp[i] == 0){
                flag = false;
                break;
            }
        }
        cout << ((flag)? "YES" : "NO") << endl;
    }
}