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
        sort(arr, arr+n);
        int i = n/2;
        int j = 0;
        bool pstv = false;
        while(i >= 0 and i <n){
            cout << arr[i] << ' ';
            j++;
            if(pstv){
                i += j;
                pstv = false;
            }
            else{
                i -= j;
                pstv = true;
            }
            
        }
        cout << endl;
    }
}