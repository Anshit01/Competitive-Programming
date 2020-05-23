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
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int arr[n];
        f(j, 0, n){
            cin >> arr[j];
        }
        sort(arr, arr+n);
        ll sum = arr[n-1];
        int i = n-1;
        while(sum / (n-i) >= x and i >= 0){
            i--;
            sum += arr[i];
        }
        cout << n-i-1 << endl;
    }
}