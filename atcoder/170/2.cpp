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
    ll a, b;
    cin >> a >> b;
    if(2*a <= b && 4*a >= b && b % 2 == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}