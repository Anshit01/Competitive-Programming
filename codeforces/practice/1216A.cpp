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
    int n;
    char s[n];
    int score = 0;
    cin >> n >> s;
    for(int i = 0; i < n-1; i += 2){
        if(s[i] == s[i+1]){
            if(s[i] == 'a'){
                s[i] = 'b';
            }
            else{
                s[i] = 'a';
            }
            score++;
        }
    }
    dbg(score);
    dbg(s)
}