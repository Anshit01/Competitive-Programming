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
    ll n, revenue = 0;
    cin >> n;
    ll arr[n];
    f(i, 0, n){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i = n-1; i >= 0; i--){
        if(arr[i]* (n-i) > revenue){
            revenue = arr[i] * (n-i);
        }
    }
    cout << revenue << endl;
}