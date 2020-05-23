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
        int min = INT32_MAX;
        int count = 0;
        f(i, 1, n){
            if(arr[i] < arr[i-1]){
                if(min > arr[i-1] - arr[i]) min = arr[i-1] - arr[i];
                arr[i] = arr[i-1];
                count++;
            }
        }
        int x = 0;
        if(min == INT32_MAX) min = 0;
        while(min > 0){
            min /= 2;
            x++;
        }
        if(count > 0){
            cout << count + x - 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}