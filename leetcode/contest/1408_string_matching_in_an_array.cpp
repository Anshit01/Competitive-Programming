#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

vector<string> stringMatching(vector<string>& words) {
    unordered_set<string> ans;
    int len = words.size();
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(i != j and words[i].find(words[j]) != string::npos){
                ans.insert(words[j]);
            }
        }
    }
    vector<string> ans1;
    for(auto s : ans){
        ans1.push_back(s);
    }
    return ans1;
}

int main(){
    ios::sync_with_stdio(0);
    vector<string> vect = {"mass","as","hero","superhero"};
    vector<string> ans;
    ans = stringMatching(vect);
    for(auto s : ans){
        cout << s << ' ';
    }
    cout << endl;
}