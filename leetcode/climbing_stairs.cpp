#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

long long fact[15];

void calc_fact(){
    fact[0] = 1;
    for(int i = 1; i < 15; i++){
        fact[i] = fact[i-1] * i;
    }
}

long long combination(int n, int r){
    if(r < n-r){
        r = n-r;
    }
    long long ans = 1;
    for(int i = n; i > r; i--){
        ans *= i;
    }
    for(int i )
}

int climbStairs(int n) {
    
}

int main(){
    ios::sync_with_stdio(0);
    
}