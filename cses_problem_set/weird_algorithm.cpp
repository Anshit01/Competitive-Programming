/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ll n;
    cin >> n;
    while(n != 1){
        cout << n << ' ';
        if(n & 1){
            n = 3*n + 1;
        }else{
            n /= 2;
        }
    }
    cout << 1 << endl;
}