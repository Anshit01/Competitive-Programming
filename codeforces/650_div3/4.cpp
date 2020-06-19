/* *>>>>>Anshit_Bhardwaj<<<<<* */
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
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        cin >> n;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        sort(s.begin(), s.end(), greater<char>());
        queue<pair<char, int>> cnt;
        cnt.push({s[0], 1});
        for(int i = 1; i < s.size(); i++){
            if(cnt.back().first == s[i]){
                cnt.back().second++;
            }else{
                cnt.push({s[i], 1});
            }
        }
        int zeros = 0;
        string ans(n, ' ');
        for(int a : arr){
            if(a == 0) zeros++;
        }
        while(zeros){
            while(cnt.front().second < zeros){
                cnt.pop();
            }
            char c = cnt.front().first;
            cnt.pop();
            auto tmparr(arr);
            f(i, 0, n){
                if(arr[i] == 0){
                    ans[i] = c;
                    f(j, 0, n){
                        tmparr[j] -= abs(i - j);
                    }
                    tmparr[i] = -1;
                }
            }
            arr = tmparr;
            zeros = 0;
            f(i, 0, n){
                if(arr[i] == 0) zeros++;
            }
        }
        cout << ans << endl;
    }
}