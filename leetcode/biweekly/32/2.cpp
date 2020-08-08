/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        vector<int> availableTurns(27, INT32_MAX);
        f(i, 1, 27){
            availableTurns[i] = k/26;
            if(k%26 >= i){
                availableTurns[i]++;
            }
        }
        int n = s.length();
        if(n != t.length()){
            return false;
        }
        vector<int> reqTurns(27, 0);
        f(i, 0, n){
            reqTurns[diff(s[i], t[i])]++;
        }
        reqTurns[0] = 0;
        f(i, 1, 27){
            if(reqTurns[i] > availableTurns[i]){
                return false;
            }
        }
        return true;
    }

    int diff(char s, char t){
        if(s <= t){
            return t-s;
        }else{
            return 26 - s + t;
        }
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}