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
    int n;
    cin >> n;
    bool flag = 0;
    if(n >= 700 and n <= 799){
        flag = true;
    }
    n %= 100;
    if(n >= 70 and n <= 79){
        flag = true;
    }
    n %= 10;
    if(n == 7){
        flag = true;
    }
    if( flag){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}