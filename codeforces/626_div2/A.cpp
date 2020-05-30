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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a;
        int even = -1, odd1 = -1, odd2 = -1;
        f(i, 1, n+1){
            cin >> a;
            if(a%2){
                if(odd1 != -1){
                    odd2 = i;
                    
                }
                else{
                    odd1 = i;
                }
            }
            else{
                if(even == -1){
                    even = i;
                    
                }
            }
            
        }
        if(even != -1){
            cout << 1 << endl << even<< endl;
        }
        else if(odd1 != -1 and odd2 != -1){
            cout << 2 << endl;
            dbg2(odd1, odd2);
        }
        else{
            cout << -1 << endl;
        }
    }
}