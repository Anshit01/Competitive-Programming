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
#define endl '\n'
using namespace std;

void solve() {
    string s;
        cin >> s;
        int n = s.size();
        vector<pair<int, int>> path(n);
        int x = 0, y = 0;
        f(i, 0, n){
            if(s[i] == 'L'){
                x--;
            }else if(s[i] == 'R'){
                x++;
            }else if(s[i] == 'U'){
                y++;
            }else{
                y--;
            }
            path[i] = {x, y};
        }
        for(auto& pt : path){
            x = 0;
            y = 0;
            for(char c : s){
                int u = x + (c == 'R') - (c == 'L');
                int v = y + (c == 'U') - (c == 'D');
                if(pt.first != u || pt.second != v){
                    x = u;
                    y = v;
                }
            }
            if(x == 0 && y == 0){
                cout << pt.first << " " << pt.second << endl;
                return;
            }
        }
        cout << 0 << " " << 0 << endl;
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}