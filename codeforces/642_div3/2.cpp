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
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> arr1(n), arr2(n);
        f(i, 0, n){
            cin >> arr1[i];
        }
        f(i, 0, n){
            cin >> arr2[i];
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end(), greater<int>());
        f(i, 0, k){
            if(arr1[i] < arr2[i]){
                arr1[i] = arr2[i];
            }else{
                break;
            }
        }
        ll sum = 0;
        f(i, 0, n){
            sum += arr1[i];
        }
        cout << sum << endl;
    }
}