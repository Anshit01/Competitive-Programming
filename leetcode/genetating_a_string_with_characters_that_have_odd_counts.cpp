#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

string generateTheString(int n) {
    int l;
    if(n == 0){
        return "";
    }
    string str = "";
    str.reserve(n);
    if(n%2 == 0){
        l = n-1;
    } else{
        l = n;
        str.push_back('b');
    }
    int i = 0;
    while(i < l){
        str.push_back('a');
        i++;
    }
    return str;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
    
    }
}