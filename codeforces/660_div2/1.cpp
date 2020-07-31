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
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        if(n <= 30){
            cout << "NO" << endl;
        }else if(n == 36){
            cout << "YES\n";
            cout << 5 << ' ' << 6 << ' ' << 10 << ' ' << 15 << endl;
        }else if(n == 44){
            cout << "YES\n";
            cout << 6 << ' ' << 7 << ' ' << 10 << ' ' << 21 << endl;
        }else if(n == 40){
            cout << "YES\n";
            cout << 6 << ' ' << 10 << ' ' << 21 << ' ' << 3 << endl;
        }
        else{
            cout << "YES\n";
            cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30 << endl;
        }
    }
}