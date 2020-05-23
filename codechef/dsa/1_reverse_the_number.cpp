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
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 0) {
            cout << 0 << endl;
        } else{
            int rev = 0;
            while(n > 0){
                rev *= 10;
                rev += n % 10;
                n /= 10;
            }
            cout << rev << endl;
        }
    }
}