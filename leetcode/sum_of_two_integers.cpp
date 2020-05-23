#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int getSum(int a, int b){
    int carry;
    while(b != 0){
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int main(){
    ios::sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    cout << getSum(a, b) << endl;
}