#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int climbStairs(int n) {
    long long n1 = 2, n2 = 1;
    if(n == 1) return 1;
    if(n == 2) return 2;
    for(int i = 3; i <= n; i++){
        n1 += n2;
        n2 = n1 - n2;
    }
    return n1;
}

int main(){
    ios::sync_with_stdio(0);
    
}