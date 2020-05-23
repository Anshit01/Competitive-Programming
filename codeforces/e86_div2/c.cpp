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
    int a, b, n, c;
    cin >> a >> b;
    cin >> c >> n;
    int count = 0;
    f(i, c, n+1){
        int x = (i%a)%b;
        int y = (i%b)%a;
        cout << (i%a) %b << ' ' << (i%b)%a;
        
        if(x == y){
            cout << ' ' << 11111111;
            count++;
        }
        cout << endl;
        
    }
    cout << count << endl;
}