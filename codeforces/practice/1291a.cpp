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
        string s;
        cin >> s;
        int num[n];
        f(i, 0, n){
            num[i] = (int)(s[i] - '0');
        }
        int oddcount = 0;
        f(i, 0, n){
            if(num[i] % 2){
                oddcount++;
            }
        }
        if(oddcount >= 2){
            oddcount = 2;
            int i = 0;
            while(oddcount > 0){
                if(num[i] % 2){
                    cout << num[i];
                    oddcount--;
                }
                i++;
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}