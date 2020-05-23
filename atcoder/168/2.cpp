#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int k;
    string s;
    cin >> k >> s;
    int n = s.length();
    if(n <= k){
        cout << s << endl;
    }else{
        s = s.substr(0, k);
        cout << s << "...\n";
    }
}