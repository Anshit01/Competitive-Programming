#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int n = s.length();
        map<char, int> mp;
        mp.insert({'1', 0});
        mp.insert({'2', 0});
        mp.insert({'3', 0});
        int start = 0, end = 0;
        while(end < n){
            mp[s[end]]++;
            if(mp['1'] && mp['2'] && mp['3']){
                break;
            }
            end++;
        }
        if(end == n){
            cout << 0 << endl;
            continue;
        }
        int minlen = end - start + 1;
        while(end < n){
            if(mp[s[start]] > 1){
                mp[s[start]]--;
                start++;
            }else{
                minlen = min(minlen, end - start +1);
                end++;
                if(end != n){
                    mp[s[end]]++;
                }
            }
        }
        cout << minlen << endl;
    }
}