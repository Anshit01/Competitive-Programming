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
    string s;
    cin >> s;
    int c[6];
    int ans = 0;
    f(i, 0, 6){
        c[i] = (int)s[i+1] - 48;
        ans ^= c[i];
    }
    cout << ans << endl;
    int a = ans / 8;
    ans %= 8;
    int b = ans / 4;
    ans %= 4;
    int c = ans / 2;
    ans %= 2;
    ans += a + b + c;
    if(ans % 2 == 0)
}