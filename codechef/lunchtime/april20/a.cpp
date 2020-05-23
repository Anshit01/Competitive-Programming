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
    while(t--){
        cin >> n;
        int s;
        cin >> s;
        int arr[n];
        int minD = 100, minF = 100;
        f(i, 0, n){
            cin >> arr[i];
        }
        int a;
        f(i, 0, n){
            cin >> a;
            if(a == 0){
                if(minD > arr[i]) minD = arr[i];
            }
            else if(a == 1){
                if(minF > arr[i]) minF = arr[i];
            }
        }
        if(s + minD + minF <= 100){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
    }
}