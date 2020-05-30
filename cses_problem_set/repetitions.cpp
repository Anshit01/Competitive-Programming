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
    string s;
    cin >> s;
    int n = s.size();
    int len = 1, maxlen = 0;
    char prev = s[0];
    f(i, 1, n){
        if(prev == s[i]){
            len++;
        }else{
            maxlen = max(maxlen, len);
            len = 1;
            prev = s[i];
        }
    }
    maxlen = max(maxlen, len);
    cout << maxlen << endl;
}