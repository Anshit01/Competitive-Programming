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
    int T, a, b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        if(a == b){
            if(a % 3 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            if(a < b){
                swap(a, b);
            }
            int diff = a - b;
            if(a - (2 * diff) == b - diff && b - diff >= 0 && (b - diff) % 3 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}