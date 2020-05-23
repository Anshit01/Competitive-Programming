#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int lcm(int a, int b){  
    return (a*b)/__gcd(a, b);  
} 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll a, b, n, x, y, lcmi;
        cin >> a >> b >> n;
        lcmi = lcm(a, b);
        if(a > b){
            int tmp = a;
            a = b;
            b = tmp;
        }
        f(i, 0, n){
            cin >> x >> y;
            int sumx = 0, sumy = 0;
            x--;
            if(x < lcmi){
                sumx = (x < b)? 0 : x-b+1;
            }else{
                sumx = x - ((((x/lcmi)-1)*b) + min(x%lcmi, b) + b-1);
            }
            if(y < lcmi){
                sumy = (y < b)? 0 : y-b+1;
            }else{
                sumy = y - ((((y/lcmi)-1)*b) + min(y%lcmi, b) + b-1);
            }
            cout << sumy - sumx << ' ';
        }
        cout << endl;
        
    }
}