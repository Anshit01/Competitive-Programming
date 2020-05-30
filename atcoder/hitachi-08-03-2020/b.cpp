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
    int a, b, m, amin = INT32_MAX, bmin = INT32_MAX, min_ans;
    cin >> a >> b >> m;
    int ara[a], arb[b];
    f(i, 0, a){
        cin >> ara[i];
        if(amin > ara[i]) amin = ara[i];
    }
    f(i, 0, b){
        cin >> arb[i];
        if(bmin > arb[i]) bmin = arb[i];
    }
    min_ans = amin + bmin;
    int x, y, c;
    f(i, 0, m){
        cin >> x >> y >> c;
        x--;
        y--;
        if(ara[x] + arb[y] - c < min_ans){
            min_ans = ara[x] + arb[y] - c;
        }
    }
    cout << min_ans << endl;
}