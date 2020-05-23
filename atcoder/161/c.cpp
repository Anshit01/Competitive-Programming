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
    ll n, k;
    cin >> n >> k;
    ll diff1 = n%k;
    ll diff2 = k - diff1;
    if(diff1 < diff2){
        cout << diff1 << endl;
    }
    else {
        cout << diff2 << endl;

    }
}