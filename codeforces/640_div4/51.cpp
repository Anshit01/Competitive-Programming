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
        vector<int> arr(n);
        vector<int> count(n+1, 0);
        vector<bool> sums(n+1, false);
        f(i, 0, n){
            cin >> arr[i];
            count[arr[i]]++;
        }
        int sum = 0;
        f(i, 0, n-1){
            sum = arr[i];
            int j = i+1;
            while(j <  n){
                sum += arr[j];
                j++;
                if(sum > n){
                    break;
                }
                sums[sum] = true;
            }
        }
        int c = 0;
        f(i, 1, n+1){
            if(count[i] != 0 && sums[i]){
                c += count[i];
            }
        }
        cout << c << endl;
    }
}