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
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        string a, b;
        cin >> a >> b;
        if(a == b){
            cout << 0 << endl;
        }else{
            bool pos = true;
            f(i, 0, n){
                if(a[i] < b[i]){
                    pos = false;
                    break;
                }
            }
            if(pos){
                bool allb = true;
                f(i, 0, n){
                    
                }
            }else{
                cout << -1 << endl;
            }
        }
    }
}