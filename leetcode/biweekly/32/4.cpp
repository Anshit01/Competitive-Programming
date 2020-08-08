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
    int longestAwesome(string s) {
        int ans = 0;
        int mid;
        int l = 1, r = s.length();
        while(l <= r){
            mid = (l+r)/2;
            if(containsPalindrome(s, mid)){
                ans = mid;
                l = mid + 1;
            }else{
                if(mid < r && containsPalindrome(s, mid+1)){
                    ans = mid + 1;
                    l = mid + 2;
                }else{
                    r = mid -1;
                }
            }
        }
        return ans;
    }

    bool containsPalindrome(string& s, int l){
        vector<int> mp(10, 0);
        int sum = 0;
        int n = s.length();
        for(int i = 0; i < l; i++){
            if(mp.at(s.at(i) - '0') == 1){
                mp.at(s.at(i) - '0') = 0;
                sum--;
            }else{
                sum++;
                mp.at(s.at(i) - '0') = 1;
            }
        }
        if(sum < 2){
            return true;
        }
        for(int i = l; i < n; i++){
            if(mp.at(s.at(i) - '0') == 1){
                mp.at(s.at(i) - '0') = 0;
                sum--;
            }else{
                sum++;
                mp.at(s.at(i) - '0') = 1;
            }
            if(mp.at(s.at(i-l) - '0') == 1){
                mp.at(s.at(i-l) - '0') = 0;
                sum--;
            }else{
                sum++;
                mp.at(s.at(i-l) - '0') = 1;
            }
            if(sum < 2){
                return true;
            }

        }
        
        return false;
    }

};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    Solution sol;
    string s = "0786040670823";
    cout << sol.longestAwesome(s) << endl;
}