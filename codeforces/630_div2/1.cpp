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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag = true;
        int xi, yi, xmin, ymin, xmax, ymax;
        cin >> xi >> yi >> xmin >> ymin >> xmax >> ymax;
        int rightmax = b-a, topmax = d-c;
        if(rightmax >= 0){
            if(rightmax > xmax - xi){
                flag = false;
            }
        }
        else{
            if(rightmax < xmin - xi){
                flag = false;
            }
        }
        if(topmax >= 0){
            if(topmax > ymax - yi){
                flag = false;
            }

        }
        else{
            if(topmax < ymin - yi){
                flag = false;
            }
        }
        if(a > 0 && xmin == xi && xmax == xi){
            flag = false;
        }
        if(b > 0 && xmax == xi && xmin == xi){
            flag = false;
        }
        if(c > 0 && ymin == yi && ymax == yi){
            flag = false;
        }
        if(d > 0 && ymin == yi && ymax == yi){
            flag = false;
        }
        if(flag){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}