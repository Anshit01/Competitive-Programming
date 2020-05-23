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
    int in;
    cin >> in;
    int sum = 0, n1 = 1, n2 = 2, tmp;
    while(n2 <= in){
        if(n2 % 2 == 0) sum += n2;
        tmp = n1;
        n1 = n2;
        n2 += tmp;
    }
    cout << sum << endl;
}