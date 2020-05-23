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
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        f(i, 0, n){
            cin >> arr[i];
        }
        int maxlen = 0;
        int l = 0, lmax = 0, r = 0, rmax = 0;
        int i = 0;
        while(i < n){
            if(arr[i] > lmax){
                lmax = arr[i];
                l++;
            }else{
                break;
            }
            i++;
        }
        if(i+1 < n){
            
        }else{
            maxlen = i;
        }
        cout << maxlen << endl;
    }
}