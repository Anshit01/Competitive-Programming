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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll sum1 = 0, sum2 = 0;
        ll pw = 2;
        f(i, 1, n/2){
            sum1 += pw;
            pw  *= 2;
        }
        f(i, 1, n/2+1){
            sum2 += pw;
            pw *= 2;
        }
        sum1 += pw;
        cout << abs(sum1 - sum2) << endl;
    }
}