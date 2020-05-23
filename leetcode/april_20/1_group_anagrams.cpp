#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    map<string, int> mp;
    int i = 0;
    for(string s : strs){
        string tmp(s);
        sort(tmp.begin(), tmp.end());
        if(mp.find(tmp) != mp.end()){
            ans[mp.find(tmp)->second].push_back(s);
        }else{
            mp.insert({tmp, i});
            vector<string> vect({s});
            ans.push_back(vect);
            i++;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    vector<string> q({"eat","tea","tan","ate","nat","bat"});
    auto ans = groupAnagrams(q);
    for(auto x : ans){
        for(auto s : x){
            cout << s << ' ';
        }
        cout << endl;
    }
}