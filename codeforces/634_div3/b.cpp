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
    int t, n, a, b;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        int i = 0, j = 0;
        char c = 'a';
        while(i < n){
            c = 'a' + j;
            cout << c;
            i++;
            j++;
            if(j >= b) j = 0;
        }
        cout << endl;
    }
}