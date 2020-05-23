#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int fib(int N){
    int n2 = 0;
    int n1 = 1;
    if(N == 0) return 0;
    for(int i = 1; i < N; i++){
        n1 += n2;
        n2 = n1 - n2;
    }
    return n1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << fib(n) << endl;
    }
}