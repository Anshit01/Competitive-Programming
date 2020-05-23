#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> mp;
    int len, max_len = 0;
    int n = s.length();
    for(int i = 0; i < n; i++){
        auto ptr = mp.find(s[i]);
        if(ptr == mp.end()){
            mp.insert({s[i], i});
            len++;
            if(len > max_len) max_len = len;
        }
        else{
            for(int j = i-len; j < ptr->second; j++){
                mp.erase(s[j]);
            }
            len = i - ptr->second;
            mp[s[i]] = i;
        }
    }
    return max_len;
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        cout << lengthOfLongestSubstring(s) << endl;
    }
}