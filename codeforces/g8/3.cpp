/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x, y) ans.push_back({x, y})
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int, int>> ans;
    int n;
    cin >> n;
    dbg(0, 0);
    dbg(1, 0);
    dbg(0, 1);
    dbg(1, 1);
    int i = 0;
    int pt = 1;
    while(i < n){
        i++;
        dbg(pt+1, pt);
        dbg(pt, pt+1);
        if(i == n){
            dbg(pt+1, pt+1);
            break;
        }
        i++;
        dbg(pt+2, pt);
        dbg(pt+2, pt-1);
        dbg(pt+3, pt);
        dbg(pt+3, pt-1);
        dbg(pt+2, pt+1);
        dbg(pt+2, pt+2);
        dbg(pt, pt+2);
        dbg(pt+1, pt+2);
        if(i == n){
            break;
        }
        dbg(pt-1, pt+2);
        dbg(pt-1, pt+3);
        dbg(pt, pt+3);
        i++;
        pt +=2;
    }
    cout << ans.size() << endl;
    for(auto pr : ans){
        cout << pr.first << ' ' << pr.second << endl;
    }
}