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
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        int p;
        vector<int> arr(5);
        f(i, 0, 5){
            cin >> arr[i];
        }
        cin >> p;
        ll sum = 0;
        f(i, 0, 5){
            sum += arr[i] * p;
        }
        if(sum <= 5*24){
            cout << "No\n";
        }else{
            cout << "Yes\n";
        }
    }
}