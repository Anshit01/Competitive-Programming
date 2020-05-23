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
    int t, n, b, a;
    cin >> t;
    f(x, 1, t+1){
        cin >> n >> b;
        int arr[n];
        f(i, 0, n){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int cost = 0, num = 0;
        f(i, 0, n){
            if(cost + arr[i] <= b){
                cost += arr[i];
                num++;
            }
            else{
                break;
            }
        }
        cout << "Case #" << x << ": " << num << endl;
    }
}