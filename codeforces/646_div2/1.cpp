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
        cin >> n;
        int x;
        cin >> x;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        int odd = 0, even = 0;
        f(i, 0, n){
            if(arr[i] & 1){
                odd++;
            }else{
                even++;
            }
        }
        bool flag;
        if(x & 1){
            if(n == x){
                if(odd & 1){
                    flag = true;
                }else{
                    flag = false;
                }
            }else{
                if(odd > 0){
                    flag = true;
                }else{
                    flag = false;
                }
            }
        }else{
            if(n == x){
                if(odd & 1){
                    flag = true;
                }else{
                    flag = false;
                }
            }else{
                if(odd > 0){
                    flag = true;
                }else{
                    flag = false;
                }
            }
        }
        cout << ((flag)? "Yes" : "No") << endl;
    }
}