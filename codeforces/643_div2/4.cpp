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
    int t, n, s;
    cin >> n >> s;
    if(s >= 2*n){
        cout << "YES\n";
        f(i, 1, n){
            cout << "2 ";
        }
        cout << (s - (2*(n-1))) << endl;
        cout << 1 << endl;
    }else{
        cout << "NO\n";
    }
    
}