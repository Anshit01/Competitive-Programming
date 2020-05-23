#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    n %= 10;
    if(n == 3){
        cout << "bon\n";
    }else if(n == 0 || n == 1 || n == 6 || n == 8){
        cout << "pon\n";
    }else{
        cout << "hon\n";
    }
}