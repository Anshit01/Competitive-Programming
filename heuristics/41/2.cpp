/*>>>>>Anshit_Bhardwaj<<<<<*/
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
    cin.tie(NULL);
    ll r, c, q;
    cin >> r >> c;
    vector<vector<pair<ll, ll>>> grid(r, vector<pair<ll, ll>>(c, {0, 0}));
    f(i, 0, r){
        f(j, 0, c){
            cin >> grid[i][j].first;
        }
    }
    f(i, 0, r){
        grid[i][0].second = grid[i][0].first;
        f(j, 1, c){
            grid[i][j].second = grid[i][j].first + grid[i][j-1].second;
        }
    }
    f(j, 1, r){
        f(i, 0, c){
            grid[j][i].second = grid[j][i].second + grid[j-1][i].second;
        }
    }
    cin >> q;
    ll x1, y1, x2, y2;
    f(i, 0, q){
        cin >> x1 >> y1 >> x2 >> y2;
        ll su, sup, sside, si;
        su = grid[x2-1][y2-1].second;
        sup = (x1 == 1)? 0 : grid[x1-2][y2-1].second;
        sside = (y1 == 1)? 0 : grid[x2-1][y1-2].second;
        si = (y1 == 1 || x1 == 1)? 0 : grid[x1-2][y1-2].second;
        cout << su - sup - sside + si << endl;
    }
    
}