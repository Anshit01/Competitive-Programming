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
        int x, y, a, b, distance, step;
        cin >> x >> y >> a >> b;
        distance = y - x;
        step = a + b;
        if(distance % step == 0){
            cout << distance / step << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}