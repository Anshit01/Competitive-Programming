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
    string a, b;
    cin >> a >> b;
    if(a.length()+1 == b.length() ){
        if(b.substr(0, b.length() - 1).compare(a) == 0)
        cout << "Yes\n";
        else{
            cout << "No\n";
        }
    }
    else{
        cout << "No\n";
    }
}