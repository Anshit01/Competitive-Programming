#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int firstUniqChar(string s) {
    string tmp(s);
    sort(tmp.begin(), tmp.end());
    int n = tmp.length();
    for(int i = 0; i < n; i++){
        if(upper_bound(tmp.begin(), tmp.end(), s[i]) - lower_bound(tmp.begin(), tmp.end(), s[i]) == 1){
            return i;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}