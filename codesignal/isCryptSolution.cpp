/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool isCryptSolution(vector<string> crypt, vector<vector<char>> solution){
    map<char, int> mp;
    for(auto pr : solution){
        mp[pr[0]] = pr[1] - '0';
    }
    long long a = 0, b = 0, c = 0;
    for(char c : crypt[0]){
        a += mp[c];
        a *= 10;
    }
    a /= 10;
    int len = (a == 0) ? 1 : log10(a) + 1.1;
    if(len != crypt[0].size()){
        return false;
    }
    for(char c : crypt[1]){
        b += mp[c];
        b *= 10;
    }
    b /= 10;
    len = (b == 0) ? 1 : log10(b) + 1.1;
    if(len != crypt[1].size()){
        return false;
    }
    for(char x : crypt[2]){
        c += mp[x];
        c *= 10;
    }
    c /= 10;
    len = (c == 0)? 1 : log10(c) + 1.1;
    if(len != crypt[2].size()){
        return false;
    }
    if(a + b == c){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}