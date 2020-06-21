/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
using namespace std;


const long long p = 31;
const int mod = 1000000007;

int containsDuplicate(string& S, vector<int>& sh,vector<long long>& p_pow, int len){
    unordered_map<int, vector<int>> mp;   //hash of substr & start ind of substr
    int n = S.size();
    for(int i = 0; i + len <= n; i++){
        long long cur_h = (sh[i + len] + mod - sh[i]) % mod;
        cur_h = (cur_h * p_pow[n-i-1]) % mod;
        if(mp.find(cur_h) != mp.end()){
            auto possibleAns = mp[cur_h];
            for(int ind : possibleAns){
                if(S.substr(ind, len) == S.substr(i, len)){
                    return ind;
                }
            }
            mp[cur_h].push_back(i);
        }else{
            mp[cur_h] = vector<int>({i});
        }
    }
    return -1;
}

string longestDupSubstring(string S) {
    
    int n = S.size();
    vector<long long> p_pow(n);
    p_pow[0] = 1;
    for(int i = 1; i < n; i++){
        p_pow[i] = (p_pow[i-1] * p) % mod;
    }

    vector<int> sh(n+1);
    for(int i = 0; i < n; i++){
        sh[i+1] = (sh[i] + (S[i] - 'a' + 1) * p_pow[i]) % mod;
    }

    int l = 0, r = n-1, mid, ans = 0;
    while(l <= r){
        mid = l + (r-l)/2;
        if(containsDuplicate(S, sh, p_pow, mid) != -1){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    int ind = containsDuplicate(S, sh, p_pow, ans);
    return S.substr(ind, ans);
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