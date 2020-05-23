#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

string reformat(string s) {
    string alpha = "", num = "", ans = "";
    int l = s.length();
    alpha.reserve(l);
    num.reserve(l);
    ans.reserve(l);
    for(int i = 0; i < l; i++){
        if(s[i] < 'a'){
            num.push_back(s[i]);
        } else{
            alpha.push_back(s[i]);
        }
    }
    if(num.length() == alpha.length()){
        for(int i = 0; i < num.length(); i++){
            ans.push_back(num[i]);
            ans.push_back(alpha[i]);
        }
    } else if(num.length() + 1 == alpha.length()){
        for(int i = 0; i < num.length(); i++){
            ans.push_back(alpha[i]);
            ans.push_back(num[i]);
        }
        ans.push_back(alpha[alpha.length() - 1]);
    } else if(alpha.length() + 1 == num.length()){
        for(int i = 0; i < alpha.length(); i++){
            ans.push_back(num[i]);
            ans.push_back(alpha[i]);
        }
        ans.push_back(num[num.length() - 1]);
    } else{
        return "";
    }
    return ans;
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