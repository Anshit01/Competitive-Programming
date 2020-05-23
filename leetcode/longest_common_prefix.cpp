#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int len = strs.size();
    if(len == 0){
        return "";
    }
    string prefix = strs[0];
    for(int i = 1; i < len; i++){
        int j = 0;
        while(j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]){
            j++;
        }
        prefix = prefix.substr(0, j);
    }
    return prefix;
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