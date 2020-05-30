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
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
    }else if(n <= 3){
        cout << "NO SOLUTION" << endl;
    }else if(n == 4){
        cout << "3 1 4 2\n";
    }else{
        for(int i = 1; i <= n; i += 2){
            cout << i << ' ';
        }
        for(int i = 2; i <= n; i += 2){
            cout << i << ' ';
        }
        cout << endl;
    }
}