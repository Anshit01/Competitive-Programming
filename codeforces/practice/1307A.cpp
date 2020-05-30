#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl;
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    int t, n, d;
    cin >> t;
    while(t--){
        cin >> n >> d;
        int arr[n];
        f(i, 0, n){
            cin >> arr[i];
        }
        if(n > 1){
            f(i, 0, d){
                int j = 1;
                while(!arr[j] && j < n-1){
                    j++;
                }
                if(arr[j] == 0)
                    break;
                arr[j]--;
                arr[j-1]++;
            }
        }
        cout << arr[0] << endl;
    }
}