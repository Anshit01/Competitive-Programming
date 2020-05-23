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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a;
        unordered_map<int, int> mp;
        int max = 0;
        f(i, 0, n){
            cin >> a;
            if(mp.find(a) != mp.end()){
                mp[a] += 1;
            }
            else{
                mp[a] = 1;
            }
            if(mp[a] > max){
                max = mp[a];
            }
        }
        int unique = mp.size();
        int ans;
        if(unique > max){
            ans = max;
        }
        else if(unique < max){
            ans = unique;
        }
        else{
            ans = max -1;
        }
        cout << ans << endl;
    }
}