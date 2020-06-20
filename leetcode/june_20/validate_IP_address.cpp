/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#include <regex>

#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

string validIPAddress(string IP) {
    regex v4("(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])");
    if(regex_match(IP, v4)){
        return "IPv4";
    }
    regex v6("((([0-9a-fA-F]){1,4})\\:){7}([0-9a-fA-F]){1,4}");
    if(regex_match(IP, v6)){
        return "IPv6";
    }
    return "Neither";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        cout << validIPAddress(s) << endl;
    }
}