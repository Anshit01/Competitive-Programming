#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

string longestPalindrome(string s) {
    string longest = "";
    int l = s.length();
    for(int i = 0; i < l; i++){
        int start = i, end = i+1;
        while(start >= 0 and end < l){
            if(s[start] == s[end]){
                start--;
                end++;
            }
            else{
                break;
            }
        }
        if(end - start - 1 > longest.length()){
            longest = s.substr(start+1, end-start-1);
        }
        start = i;
        end = i;
        while(start >= 0 and end < l){
            if(s[start] == s[end]){
                start--;
                end++;
            }
            else{
                break;
            }
        }
        if(end - start - 1 > longest.length()){
            longest = s.substr(start+1, end-start-1);
        }
    }
    return longest;
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        cout << longestPalindrome(s) << endl;
    }
}