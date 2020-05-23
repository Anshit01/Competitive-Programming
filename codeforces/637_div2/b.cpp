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
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int arr[n], peak[n];
        f(i, 0, n){
            cin >> arr[i];
            peak[i] = 0;
        }
        f(i, 1, n-1){
            if(arr[i] > arr[i-1] and arr[i] > arr[i+1]){
                peak[i] = 1;
            }
        }
        int npeaks = 0, maxpeaks = 0, maxpeak_ind;
        f(i, 0, k-1){
            if(peak[i]) npeaks++;
        }
        maxpeak_ind = 0;
        maxpeaks = npeaks;
        for(int i = 1; i <= n-k; i++){
            if(peak[i]) npeaks--;
            if(peak[i+k-2]) npeaks++;
            if(maxpeaks < npeaks){
                maxpeaks = npeaks;
                maxpeak_ind = i;
            }
        }
        cout << maxpeaks+1 << ' ' << maxpeak_ind+1 << endl;
    }
}