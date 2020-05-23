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
    int  n, m;
    cin >> n >> m;
    int arr[n];
    int sum = 0;
    f(i, 0, n){
        cin >> arr[i];
        sum += arr[i];
    }
    int limit= sum /(4*m);
    if(sum % (4*m) != 0){
        limit++;
    }
    sort(arr, arr+n);
    if(arr[n-m] >= limit){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}