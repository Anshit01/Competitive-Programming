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
    string s;
    cin >> t;
    f(x, 1, t+1){
        cin >> n >> s;
        int len = s.length();
        cout << "Case #" << x << ": ";
        f(i, 0, len){
            cout << ((s[i] == 'S')? 'E' : 'S');
        }
        cout << endl;
    }
}