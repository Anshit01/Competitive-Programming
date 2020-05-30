#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    ll t, n, k, a;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int *arru = new int[n];
        int *arrd = new int[n];
        ll sumu = 0, sumd = 0;
        f(i, 0, n){
            cin >> a;
            a %= k;
            arrd[i] = a;
            arru[i] = 7 - a;
            arru[i] %= 7;
            sumu += arru[i];
            // sumd += arrd[i];
        }
        int res = 0;
        f(i, 0, n){
            sumd += arrd[i];
            sumu -= arru[i];
            if(sumd - sumu >= 0){
                res = sumd - sumu;
                break;
            }
        }
        cout << res <<endl;

    }
}