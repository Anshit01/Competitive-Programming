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
    string s;
    cin >> s;
    bool yes = true;
    int l = s.length();
    if(l%2){
        yes = false;
    }
    f(i, 0, l){
        if(i%2){
            if(s.at(i) != 'i'){
                yes = false;
            }
        }
        else if(s.at(i) != 'h'){
            yes = false;
        }
    }
    if(yes){
        dbg("Yes");
    }
    else{
        dbg("No");
    }
}