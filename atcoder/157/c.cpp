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
    int n, m;
    cin >> n >> m;
    int num[n];
    f(i, 0, n){
        num[i] = 0;
    }
    int s[m], c[m];
    f(i, 0, m){
        cin >> s[i] >> c[i];
    }
    f(i, 0, m){
        if(num[s[i]-1] != 0 && c[i] != num[s[i]-1]){
            dbg("-1");
            return 0;
        }
        else{
            num[s[i]-1] = c[i];
            if(c[i] == 0 && s[i] == 1){
                dbg("-1");
                return 0;
            }
        }
    }

    

    int number = 0;
    if(num[0] == 0 && n != 1){
        num[0] = 1;
    }
    f(i, 0, n){
        number += num[i] * ceilf(pow(10, n-i-1));
    }
    
   

    dbg(number);
}