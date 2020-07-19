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
        cin >> n;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        int mx = 0, rmx = 0, starti = 0;
        int l = 0, r = n-1;
        while(l < r){
            int mn = min(arr[l], arr[r]);
            if(mn < mx){
                mx = max(mn, rmx);
                if(arr[l] <= arr[r]){
                    starti = l;
                }else{
                    starti = r;
                }
                l = starti+1;
            }else{
                mx = mn;
                if(arr[l] <= arr[r]){
                    l++;

                }else{
                    r--;
                    rmx = mx;
                }
            }
            
        }
        cout << starti << endl;
    }
}