#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool is_prime(ll n){
    if(n == 0 or n == 1) return false;
    if(n % 2 == 0) return false;
    int rt = sqrtl(n);
    for(int i = 3; i <= rt; i += 2){
       if(n % i == 0){
           return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    ll t, x, k;
    cin >> t;
    while(t--){
        cin >> x >> k;
        bool flag = false;
        if(k == 1){
            if(x >= 2){
                flag = true;
            }
        }
        else if(k == 2){
            if(x >= 4){
                if(!is_prime(x)){
                    flag = true;
                }
            }
        }
        else{
            flag = false;
        }

        cout << ((flag)? 1 : 0) << endl;
    }
}