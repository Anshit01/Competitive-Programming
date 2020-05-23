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
    if(s[2] == s[3] && s[4] == s[5]){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}