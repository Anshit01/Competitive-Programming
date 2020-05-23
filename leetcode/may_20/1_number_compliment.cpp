#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int findComplement(int num) {
    bitset<32> bits(num);
    int n = log2(num) + 1;
    for(int i = 0; i < n; i++){
        bits.flip(i);
    }
    return bits.to_ulong();
}

int main(){
    cout << ~5 << endl;
}