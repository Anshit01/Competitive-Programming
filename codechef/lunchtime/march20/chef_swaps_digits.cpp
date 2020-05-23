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
    int t, a, b, a1, a2, b1, b2, max, tmp;
    cin >> t;
    while(t--){
        cin >> a >> b;
        a1 = a/10;
        a2 = a%10;
        b1 = b/10;
        b2 = b%10;
        max = 0;
        tmp = a+b;
        if(a > 9 && b > 9){
            if(tmp > max) max = tmp;
            tmp = (b1+b2)*10 + a2 + a1;
            if(tmp > max) max = tmp;
            tmp = (a2+a1)*10 + b1 + b2;
            if(tmp > max) max = tmp;
        }
        else if(a < 10 and b < 10){
            max = a + b;
        }
        else if(a < 10){
            if(tmp > max) max = tmp;
            tmp = (a2)*10 + b1 + b2;
            if(tmp > max) max = tmp;
        }
        else{
            if(tmp > max) max = tmp;
            tmp = (b2)*10 + a2 + a1;
            if(tmp > max) max = tmp;
        }
        cout << max << endl;

        
    }
}