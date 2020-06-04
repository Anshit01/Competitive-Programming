/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

std::string amendTheSentence(std::string s) {
    string ans;
    int n = s.size();
    ans.push_back(tolower(s[0]));
    for(int i = 1; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ans.push_back(' ');
            ans.push_back(s[i] - 'A' + 'a');
        }else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}