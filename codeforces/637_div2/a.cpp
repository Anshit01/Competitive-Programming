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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag = false;
        if(n* (a-b) <= c-d and n*(a+b) >= c-d){
            flag = true;
        }
        else if(n*(a-b) <= c+d and n*(a+b) >= c+d){
            flag = true;
        }
        else if(n*(a-b) >= c-d and n*(a+b) <= c+d){
            flag = true;
        }
        if(flag){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}