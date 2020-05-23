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
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a, b, x, y, sum = 0;;
        cin >> x >> y;
        cin >> a >> b;
        if(x < y){
            int tmp = x;
            x = y;
            y = tmp;
        }
        sum = (x-y) * a;
        sum += y * b;
        if(a*(x+y) < sum){
            sum = a*(x+y);
        }
        cout << sum << endl;
    }
}