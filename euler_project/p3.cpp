// CPP program to print prime factors and their 
// powers. 
#include <bits/stdc++.h> 
using namespace std; 
  
// function to calculate all the prime factors and  
// count of every prime factor 
void factorize(long long n) 
{ 
    int count = 0; 
  
    // count the number of times 2 divides  
    while (!(n % 2)) { 
        n >>= 1; // equivalent to n=n/2; 
        count++; 
    } 
  
    // if 2 divides it 
    if (count) 
        cout << 2 << "  " << count << endl; 
  
    // check for all the possible numbers that can  
    // divide it 
    for (long long i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) 
            cout << i << "  " << count << endl; 
    } 
  
    // if n at the end is a prime number. 
    if (n > 2) 
        cout << n << "  " << 1 << endl; 
} 
  
// driver program to test the above function 
int main() 
{ 
    long long n;
    cin >> n;
    factorize(n); 
    return 0; 
} 