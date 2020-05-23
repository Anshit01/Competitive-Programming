#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool check(string& s, string& t, int ind, int n){
    int i = 0, j = ind;
    while(i < n){
        if(s[i] != t[j]){
            return false;
        }
        i++;
        j++;
        j %= n;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    string s, t;
    cin >> n >> s >> t;
    int ind = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[0] == t[i]){
            if(check(s, t, i, n)){
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
}