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
    int t;
    cin >> t;
    while(t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int sum = a + b + c + n;
        if(sum % 3 == 0 and sum/3 >= a and sum/3 >= b and sum/3 >= c){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}