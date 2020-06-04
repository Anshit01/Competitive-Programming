/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl

using namespace std;

inline int tonum(char c){
    if(c >= 'A' && c <= 'Z'){
        return c - 'A' + 1;
    }
    return c - 'a' + 27;
}

int strstr(std::string s, std::string x) {
    const long long mod = 1e9 + 7;
    const long long p1 = 61;
    const long long p2 = 59;
    int n = s.size();
    int m = x.size();
    if(n < m){
        return -1;
    }
    vector<long long> p1_pow(n);
    p1_pow[0] = 1;
    for(int i = 1; i < n; i++){
        p1_pow[i] = (p1 * p1_pow[i-1]) % mod;
    }
    vector<long long> p2_pow(n);
    p2_pow[0] = 1;
    for(int i = 1; i < n; i++){
        p2_pow[i] = (p1 * p2_pow[i-1]) % mod;
    }
    long long xhash1 = 0;
    for(int i = 0; i < m; i++){
        xhash1 += (p1_pow[i] * tonum(x[i])) % mod;
    }
    long long xhash2 = 0;
    for(int i = 0; i < m; i++){
        xhash2 += (p2_pow[i] * tonum(x[i])) % mod;
    }
    vector<long long> shash1(n+1);
    shash1[0] = 0;
    for(int i = 0; i < n; i++){
        shash1[i+1] = (shash1[i] + p1_pow[i] * tonum(s[i])) % mod;
    }
    vector<long long> shash2(n+1);
    shash2[0] = 0;
    for(int i = 0; i < n; i++){
        shash2[i+1] = (shash2[i] + p2_pow[i] * tonum(s[i])) % mod;
    }
    for(int i = 0; i + m - 1 < n; i++){
        if((xhash1 * p1_pow[i]) % mod == (shash1[i+m] + mod - shash1[i]) % mod && (xhash2 * p2_pow[i]) % mod == (shash2[i+m] + mod - shash2[i]) % mod){
            return i;
        }
    }
    return -1;
}

int ans(string s, string x){
    return s.find(x);
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