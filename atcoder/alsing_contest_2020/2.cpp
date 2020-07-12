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
    int n, a, cnt = 0;
    cin >> n;
    f(i, 1, n+1){
        cin >> a;
        if(i & 1){
            if(a & 1){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}