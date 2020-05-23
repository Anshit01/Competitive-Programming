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
        int div = 1;
        int arr[10];
        int count = 0;
        while(n > 0){
            int ni = n%10;
            
            if(ni != 0){
                arr[count] = ni*div;
                count++;
            }
            
            n/=10;
            div *= 10;
        }
        cout << count << endl;
            f(i, 0, count){
                cout << arr[i] << ' ';
            }
        cout << endl;
    }
}