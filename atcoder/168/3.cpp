#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    int angle1 = 30 * h, angle2 = 6 * m;
    int angle = abs(angle1-angle2);
    double ans = a*a + b*b;
    double cs = cos((double)angle*1.57079632679/(double)90);
    ans -= 2 * a * b * cs;
    ans = sqrt(ans);
    cout << setprecision(15) << ans << endl;
}