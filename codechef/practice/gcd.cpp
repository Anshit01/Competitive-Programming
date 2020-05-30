#include <iostream>
using namespace std;

unsigned int gcd(long long u, long long v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}

bool isPrime(long long n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (long long i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

int main(){
    long long t, a, m;
    cin >> t;
    while(t--){
        cin >> a >> m;
        int g = gcd(a, m);
        if(isPrime(m)){
            cout << m-1 << endl;
        }   
        else{
            long long counter = 0;
            for(int i = a; i < a+m; i+= g){
                if(gcd(i, m) == g){
                    counter++;
                }
            }
            cout << counter << endl;
        }
    }
}