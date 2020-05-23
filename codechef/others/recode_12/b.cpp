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
        int len = s.length();
        bool flag = true;
        string left = s, right = s;
        f(i, 1, len-1){
            left[i-1] = s[i];
            right[i+1] = s[i];
        }
        left[len-1] = s[0];
        right[0] = s[len-1];
        right[1] = s[0];
        left[len-2] = s[len-1];
        f(i, 0, len){
            if(right[i] != left[i]){
                flag = false;
            }
        }
        cout << ((flag)? "YES" : "NO") << endl;
    }
}