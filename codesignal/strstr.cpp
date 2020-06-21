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
    const long long p = 31;
    int n = s.size();
    int m = x.size();
    if(n < m){
        return -1;
    }
    vector<long long> p_pow(n);
    p_pow[0] = 1;
    for(int i = 1; i < n; i++){
        p_pow[i] = (p * p_pow[i-1]) % mod;
    }
    
    long long xhash = 0;
    for(int i = 0; i < m; i++){
        xhash += (p_pow[i] * tonum(x[i])) % mod;
    }
    
    vector<long long> shash(n+1);
    shash[0] = 0;
    for(int i = 0; i < n; i++){
        shash[i+1] = (shash[i] + p_pow[i] * tonum(s[i])) % mod;
    }
    
    for(int i = 0; i + m - 1 < n; i++){
        if((xhash * p_pow[i]) % mod == (shash[i+m] + mod - shash[i]) % mod){
            if(x == s.substr(i, m)){
                return i;
            }
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