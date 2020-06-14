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
    int x, n, a;
    cin >> x >> n;
    vector<bool> arr(102, false);
    f(i, 0, n){
        cin >> a;
        arr[a] = true;
    }
    int ans;
    for(int i = x; i < arr.size(); i++){
        if(arr[i] == false){
            ans = i;
            break;
        }
    }
    for(int i = x; i >= 0; i--){
        if(arr[i] == false){
            if(abs(i - x) <= abs(ans - x)){
                ans = i;
            }
            break;
        }
    }
    if(abs(ans - x) > abs(x)){
        ans = 0;
    }
    cout << ans << endl;
}