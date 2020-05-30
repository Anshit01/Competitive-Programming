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
    string a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int len = a.length();
        bool yes = true;
        f(i, 0, len){
            if(!(a.at(i) == c.at(i) or b.at(i) == c.at(i))){
                yes = false;
            }
        }
        if(yes){
            dbg("YES");
        }
        else{
            dbg("NO");
        }
    }
}