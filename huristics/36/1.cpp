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
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int c4 = 0, c6 = 0;
    f(i, 0, 3){
        if(arr[i] == 4) c4++;
        if(arr[i] == 6) c6++;
    }
    if(c4 == 2 && c6 == 1){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}