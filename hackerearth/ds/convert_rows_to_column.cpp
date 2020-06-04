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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> in(n, vector<int>(m));
    f(i, 0, n){
        f(j, 0, m){
            cin >> in[i][j];
        }
    }
    f(i, 0, m){
        f(j, 0, n){
            cout << in[j][i] << ' ';
        }
        cout << endl;
    }
}