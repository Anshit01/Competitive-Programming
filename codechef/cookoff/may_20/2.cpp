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
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int n = str.length();
        int count = 0;
        for(int i = 2; i < n; i += 2){
            if(str.compare(0, i/2, &str[i/2], i/2) == 0 && str.compare(i, (n-i)/2, &str[i + (n-i)/2], (n-i)/2) == 0){
                count++;
            }
        }
        cout << count << endl;
    }
}