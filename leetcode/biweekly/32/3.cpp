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
    int minInsertions(string s) {
        int extraleft = 0;
        int ans = 0;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                extraleft++;
            }else{
                if(extraleft > 0){
                    extraleft--;
                }else{
                    ans++;
                }
                if(i+1 < n && s[i+1] == ')'){
                    i++;
                }else{
                    ans++;
                }
            }
        }
        ans += 2*extraleft;
        return ans;
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