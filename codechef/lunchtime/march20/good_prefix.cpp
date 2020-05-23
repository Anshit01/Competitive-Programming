#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t, to_remove, repetable;
    string s;
    map<char, int> mp;
    cin >> t;
    while(t--){
        cin >> s >> to_remove >> repetable;
        for(char c = 'a'; c <= 'z'; c++){
            mp[c] = 0;
        }
        int len = s.length();
        int max_pre = 0;
        f(i, 0, len){
            if(mp[s[i]] >= repetable){
                if(to_remove > 0){
                    to_remove--;

                }
                else{
                    break;
                }
            }
            else{
                mp[s[i]]++;
                max_pre++;
            }
        }
        cout << max_pre << endl;
    }
}