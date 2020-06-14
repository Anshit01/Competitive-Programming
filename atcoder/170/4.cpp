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
    int n;
    cin >> n;
    vector<int> arr(n);
    f(i, 0, n){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<char> sieve(1000001, 1);
    int ans = 0;
    f(i, 0, n){
        if(sieve[arr[i]]){
            if(i < n-1){
                if(arr[i] != arr[i+1]){
                    ans++;
                }
            }else{
                ans++;
            }
            for(int j = arr[i]; j <= arr[n-1]; j += arr[i]){
                sieve[j] = false;
            }
        }
    }
    cout << ans << endl;
}