/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int balancedStringSplit(string s) {
    int n = s.size(), count = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'R'){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            ans++;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}