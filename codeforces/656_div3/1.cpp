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
        vector<int> arr(3);
        f(i, 0, 3){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if(arr[1] == arr[2]){
            cout << "YES\n";
            dbg3(arr[2], arr[0], arr[0]);
        }else{
            cout << "NO\n";
        }
    }
}