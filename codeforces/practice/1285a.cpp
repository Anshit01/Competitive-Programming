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
    int n;
    cin >> n;
    char c;
    int l = 0, r = 0;
    f(i, 0, n){
        cin >> c;
        if(c == 'L') l++;
        else r++;

    }
    cout << l+r+1 << endl;
    
}