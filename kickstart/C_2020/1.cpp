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
    cin.tie(NULL);
    int t, n;
    cin >> t;
    f(x, 1, t+1){
        cin >> n;
        int k;
        cin >> k;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        int ans = 0;
        bool searching = false;
        
        f(i, 0, n){
            if(!searching){
                if(arr[i] == k){
                    searching = true;
                }
            }else{
                if(arr[i-1] == arr[i] + 1){
                    if(arr[i] == 1){
                        ans++;
                        searching = false;
                    }
                }else{
                    if(arr[i] != k){
                        searching = false;
                    }
                }
            }
        }
        cout << "Case #" << x << ": " << ans << endl;
    }
}