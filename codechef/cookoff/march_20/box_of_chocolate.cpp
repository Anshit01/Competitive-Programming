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
    int ans = 0;
    while(t--){
        ans = 0;
        cin >> n;
        int arr[n];
        int max = 0;
        f(i, 0, n){
            cin >> arr[i];
            if(arr[i] > max)
                max = arr[i];
        }
        int start = 0, end = 0;
        int included_max = 0;
        for(end = 0; end < n/2; end++){
            if(arr[end] == max)
                included_max++;
        }
        end--;
        
        while(start < n){
            start++;
            end = (end != n-1)? end + 1 : 0;
            if(arr[start-1] == max) included_max--;
            if(arr[end] == max) included_max++;
            if(included_max == 0){
                ans++;
                //dbg2(start, end);
            }
            
        }
        f(i, 0, n){
            if(arr[i] != max){
                break;
            }
            if(i == n-1){
                ans = n;
            }
        }
        // if(n = 1) ans = 0;
        dbg(ans);
        
    }
}