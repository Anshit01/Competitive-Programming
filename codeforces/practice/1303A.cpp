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
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        int len = str.length();
        int start = -1, end = -1;
        int ans = 0;
        f(i, 0, len){
            if(str.at(i) == '1'){
                start = i;
                break;
            }
        }
        if(start == -1){
            cout << 0 << endl;
        }
        else{
            for(int i = len-1; i >= 0; i--){
                if(str.at(i) == '1'){
                    end = i;
                    break;
                }
            }
            f(i, start, end+1){
                if(str.at(i) == '0'){
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
}