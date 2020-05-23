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
        int max = 0, max_ind, min = 200, min_ind;
        f(i, 0, n){
            if(arr[i] > max){
                max = arr[i];
                max_ind = i;
            }
            if(arr[i] < min){
                min = arr[i];
                min_ind = i;
            }
        }
        if(min_ind < max_ind){
            cout << min << ' ' << max << endl;
        }
        else{
            cout << max << ' ' << min << endl;
        }
    }
}