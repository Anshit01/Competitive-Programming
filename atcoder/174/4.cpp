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
    int n;
    string s;
    cin >> n >> s;
    int l = 0, r = n-1;
    int cnt = 0;
    while(l+1 < r){
        while(s[l] == 'R' && l < r){
            l++;
        }
        while(s[r] == 'W' && r > l){
            r--;
        }
        if(l < r){
            s[l] = 'R';
            s[r] = 'W';
            cnt++;
        }
    }
    bool isW = false;
    f(i, 0, n){
        if(s[i] == 'W'){
            isW = true;
        }
        if(isW){
            if(s[i] == 'R'){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}