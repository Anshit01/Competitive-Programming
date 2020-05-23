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
    while(t--){
        cin >> n;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int countith, remainder = 0;
        int ans = 0;
        f(i, 1, n+1){
            if(binary_search(arr.begin(), arr.end(), i)){
                countith = upper_bound(arr.begin(), arr.end(), i) - lower_bound(arr.begin(), arr.end(), i);
                ans += countith / i;
                remainder += countith % i;
                if(remainder >= i){
                    ans++;
                    remainder = remainder % i;
                }
            }
        }
        cout << ans << endl;
    }
}