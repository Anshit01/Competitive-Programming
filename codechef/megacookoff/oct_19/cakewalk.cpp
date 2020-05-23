#include <bits/stdc++.h>
#define int long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int b = n;
        int ten_count = 0;
        while(n %10 == 0){
            n /= 10;
            ten_count++;
        }
        if((n & (n-1)) == 0){
            if(log2f64x(n) <= ten_count)
            cout << "Yes\n";
            else{
                cout << "No\n";
            }
        }
        else{
            cout << "No\n";
        }
    }
}