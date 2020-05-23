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
    int p, n, a, prev, max_diff = 0;
    cin >> p >> n;
    cin >> prev;
    int first = prev;
    f(i, 1, n){
        cin >> a;
        if(max_diff < a - prev) max_diff = a - prev;
        prev = a;
    }
    if(first + p - a > max_diff) max_diff = first + p - a;
    cout << p - max_diff << endl;
    
}