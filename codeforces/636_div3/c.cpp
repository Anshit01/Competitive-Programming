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
    while(t--){
        cin >> n;
        ll a, sum = 0, current_max = 0, first_max;
        bool pos = false, first_pos, is_first = true;
        cin >> a;
        if(a > 0){
            pos = true;
            first_pos = true;
        }
        else{
            pos = false;
            first_pos = false;
        }
        current_max = a;
        f(i, 1, n){
            cin >> a;
            if(pos != (a > 0)){
                if(is_first){
                    is_first = false;
                    first_max = current_max;
                }
                sum += current_max;
                if(a > 0){
                    pos = true;
                }
                else{
                    pos = false;
                }
                current_max = a;
            }
            else{
                if(current_max < a) current_max = a;
                
            }
        }
        // if(pos == first_pos and !is_first){
        //     if(current_max > first_max) sum += current_max - first_max;
        // }
        // else{
        //     sum += current_max;
        // }
        sum += current_max;
        cout << sum << endl;
    }
}