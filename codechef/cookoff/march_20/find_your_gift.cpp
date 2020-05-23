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
    int t, n;
    cin >> t;
    string s;
    while(t--){
        cin >> n;
        cin >> s;
        int x= 0, y= 0;
        bool hori = true;
        if(s[0] == 'L' or s[0] == 'R'){
            hori = true;
            if(s[0] == 'L'){
                x = -1;
            }
            else{
                x = 1;
            }
        }
        else{
            hori = false;
            if(s[0] == 'U')
                y = 1;
            else
                y = -1;
            
        }
        f(i, 1, s.length()){
            if(hori == false and (s[i] == 'L' or s[i] == 'R')){
                if(s[i] == 'L'){
                    x -= 1;
                }
                else if(s[i] == 'R'){
                    x += 1;
                }
                hori = true;
            }
            else if(hori and (s[i] == 'U' or s[i] == 'D')){
                if(s[i] == 'U'){
                    y += 1;
                }
                else if(s[i] == 'D'){
                    y -= 1;
                }
                hori = false;
            }
        }
        cout << x << ' ' << y << endl;
    }
}