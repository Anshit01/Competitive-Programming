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
    int t, x, y;
    cin >> t;
    f(tc, 1, t+1){
        cin >> x >> y;
        string s;
        cin >> s;
        int n = s.length();
        int cat_pos = y;
        int my_pos = 0;
        int i = 0;
        for(; i < x && i < n; i++){
            if(s[i] == 'N'){
                cat_pos++;
            } else if(s[i] == 'S'){
                cat_pos--;
            }
        }
        if(i == n){
            cout << "Case #" << tc << ": ";
            if(cat_pos == 0){
                cout << x << endl;
            }else{
                cout << "IMPOSSIBLE" << endl;
            }
            continue;
        }
        if(cat_pos == 0) {
            cout << "Case #" << tc << ": " << x << endl;
            continue;
        }
        int count = 0;
        bool flag = false;
        int ans = -1;
        while(i < n){
            if(s[i] == 'N'){
                cat_pos++;
            } else if(s[i] == 'S'){
                cat_pos--;
            }
            count++;
            i++;
            if(abs(cat_pos) <= count){
                ans = x + count;
                flag = true;
                break;
            }
        }
        cout << "Case #" << tc << ": ";
        if(!flag){
            cout << "IMPOSSIBLE" << endl;
        }else{
            cout << ans << endl;
        }
    }
}