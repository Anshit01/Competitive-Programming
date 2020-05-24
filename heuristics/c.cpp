#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool prime[1000000+1]; 
void SieveOfEratosthenes(int n){ 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++){ 
        if (prime[p] == true){
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    prime[0] = false;
    prime[1] = false;
} 

int main(){
    ios::sync_with_stdio(0);
    SieveOfEratosthenes(1000000);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n >= 10){
            bool flag = false;
            int len = int(log10(n)) + 1;
            int tens = int(pow(10, len));
            while(!flag && n > 0){
                //dbg2(len, n);

                if(prime[n]){
                    flag = true;
                    cout << "YES\n" << n << endl;
                    break;
                }
                tens /= 10;
                n %= tens;
            }
            if(flag == false)
                cout << "NO" << endl;
        }
        else{
            cout << ((prime[n])? "YES" : "NO") << endl;
        }
    }
    
}