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
        if(n < 4){
            cout << -1 << endl;
        }else{
            int i;
            if(n % 2){
                i = 1;
            }else{
                i = 2;
            }
            while(i <= n){
                cout << i << ' ';
                i += 2;
            }
            cout << n-3 << ' ' << n-1 << ' ';
            i = n - 5;
            while(i > 0){
                cout << i << ' ';
                i -= 2;
            }
            cout << endl;
        }
    }
}