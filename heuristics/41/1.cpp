/*>>>>>Anshit_Bhardwaj<<<<<*/
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
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int ln = log10(n) + 1;
        int lm = log10(m) + 1;
        if(n == 0) ln = 1;
        if(m == 0) lm = 1;
        int num[2];
        num[0] = (n) * pow(10, lm) + m;
        num[1] = m * pow(10, ln) + n;
        bool flag = false;
        f(i, 0, 2){
            int sqt = sqrt(num[i]);
            if(sqt*sqt == num[i]){
                flag = true;
            }
        }
        cout << ((flag)? "YES" : "NO") << endl;
    }
}