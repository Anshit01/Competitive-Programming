#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int n, r;
    cin >> n >> r;
    if(n < 10){
        r += (10-n)*100;
    }
    cout << r << endl;
    
}