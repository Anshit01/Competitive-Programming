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
        int arr[n];
        f(i, 0, n){
            cin >> arr[i];
        }
        bool flag = true;
        int prev_person = -10;
        f(i, 0, n){
            if(arr[i] == 1){
                if(i - prev_person < 6){
                    flag = false;
                    break;
                }
                else{
                    prev_person = i;
                }
            }
        }
        cout << ((flag)? "YES\n" : "NO\n");
    }
}