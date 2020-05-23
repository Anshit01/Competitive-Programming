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
    cin.tie(NULL);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        bool same = true;
        int l = s.length();
        f(i, 1, l){
            if(s[i-1] != s[i]){
                same = false;
                break;
            }
        }
        if(same){
            cout << s;
        }else{
            char prev = s[0];
            cout << s[0];
            f(i, 1, l){
                if(s[i] == prev){
                    cout << ((prev == '0')? '1' : '0');
                }
                cout << s[i];
                prev = s[i];
            }
        }
        cout << endl;
    }
}