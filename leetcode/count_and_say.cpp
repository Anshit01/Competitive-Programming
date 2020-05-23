#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;
string count(string s);

string countAndSay(int n) {
    string s = "1";
    for(int i = 1; i < n; i++){
        s = count(s);
    }
    return s;
}

string count(string s){
    string ans = "";
    int i = 1;
    char cur = s[0];
    int count = 1;
    while(i < s.length()){
        if(s[i] == cur){
            count++;
        }
        else{
            ans.push_back('0' + count);
            ans.push_back(cur);
            cur = s[i];
            count = 1;
        }
        i++;
    }
    ans.push_back('0' + count);
    ans.push_back(cur);
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << countAndSay(n);
    }
}