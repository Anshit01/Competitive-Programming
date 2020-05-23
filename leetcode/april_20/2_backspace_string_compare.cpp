#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

bool backspaceCompare(string S, string T) {
    string a, b;
    a.reserve(S.length());
    b.reserve(T.length());
    for(char c : S){
        if(c == '#'){
            if(!a.empty()){
                a.pop_back();
            }
        }else{
            a.push_back(c);
        }
    }
    for(char c : T){
        if(c == '#'){
            if(!b.empty()){
                b.pop_back();
            }
        }else{
            b.push_back(c);
        }
    }
    return a.compare(b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout << backspaceCompare("ab#c", "ad#b") << endl;
}