#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << " " << y << endl
#define dbg3(x, y, z) cout << x << " " << y << " " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int a[3][3];
    f(i, 0, 3){
        f(j, 0, 3){
            cin >> a[i][j];
            
        }
    }
    int n;
    cin >> n;
    int num;
    f(k, 0, n){
        cin >> num;
        f(i, 0, 3){
            f(j, 0, 3){
                if(a[i][j] == num){
                    a[i][j] = 0;
                }
            }
        }
    }
    f(i, 0, 3){
        if(a[i][0] + a[i][1] + a[i][2] == 0){
            dbg("Yes");
            return 0;
        }
    }
    f(i, 0, 3){
        if(a[0][i] + a[1][i] + a[2][i] == 0){
            dbg("Yes");
            return 0;
        }
    }
    if(a[1][1] + a[2][2] + a[0][0] == 0){
        dbg("Yes");
        return 0;
    }
    if(a[0][2] + a[1][1] + a[2][0] == 0){
        dbg("Yes");
        return 0;
    }
    dbg("No");
}