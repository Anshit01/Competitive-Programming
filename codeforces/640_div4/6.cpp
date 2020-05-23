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
    cin.tie(NULL);
    int t, n0, n1, n2;
    cin >> t;
    while(t--){
        cin >> n0 >> n1 >> n2;
        if(n1 % 2){
            f(i, 0, n2){
                cout << '1';
            }
            f(i, -1, n1/2){
                cout << "10";
            }
            f(i, 0, n0){
                cout << '0';
            }
        }else{
            if(n0 == 0 && n1 != 0){
                cout << '1';
            }
            f(i, 0, n1/2){
                cout << "01";
            }
            if(n1 == 0 && n2 != 0){
                cout << '1';
            }
            f(i, 0, n2){
                cout << '1';
            }
            if(n0 != 0){
                cout << '0';
            }
            f(i, 0, n0){
                cout << '0';
            }
        }
        cout << endl;
    }
}