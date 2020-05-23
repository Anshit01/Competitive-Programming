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
    f(x, 1, t+1){
        cin >> n;
        cout << "Case #" << x << ":\n";
        if(n <= 500){
            cout << 1 << ' ' << 1 << endl;
            if(n > 1) cout << 2 << ' ' << 2 << endl;
            if(n > 2){
                f(i, 2, n){
                    cout << i << ' ' << 1 << endl;
                }
            }
        }
        else if(n == 501){
            cout << 1 << ' ' << 1 << endl;
            cout << 2 << ' ' << 2 << endl;
            cout << 3 << ' ' << 2 << endl;
            if(n > 2){
                f(i, 3, n-1){
                    cout << i << ' ' << 1 << endl;
                }
            }
        }
        else if(n <= 998){
            cout << 1 << ' ' << 1 << endl;
            cout << 2 << ' ' << 1 << endl;
            int j = n - 499;
            f(i, 3, 500){
                cout << i << ' ' << 1 << endl;
                if(i == j){
                    cout << j+1 << ' ' << 2 << endl;
                }
            }

        }
        else if(n == 999){
            cout << 1 << ' ' << 1 << endl;
            cout << 2 << ' ' << 1 << endl;
            cout << 3 << ' ' << 1 << endl;
            cout << 4 << ' ' << 2 << endl;
            int j = n - 499;
            f(i, 4, 499){
                cout << i << ' ' << 1 << endl;
            }
            cout << 499 << ' ' << 2 << endl;
        }
        else if(n == 1000){
            cout << 1 << ' ' << 1 << endl;
            cout << 2 << ' ' << 1 << endl;
            cout << 3 << ' ' << 1 << endl;
            cout << 4 << ' ' << 1 << endl;
            cout << 5 << ' ' << 2 << endl;
            int j = n - 499;
            f(i, 5, 499){
                cout << i << ' ' << 1 << endl;
            }
            cout << 499 << ' ' << 2 << endl;
        }
    }
}