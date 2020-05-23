#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool prime[1000000+1]; 
void SieveOfEratosthenes(int n) //Function to create an array of prime numbers
{ 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {
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
        cout << ((prime[n])? "YES" : "NO") << endl;
    }
}