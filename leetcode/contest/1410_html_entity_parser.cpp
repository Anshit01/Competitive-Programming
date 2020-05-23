#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

string entityParser(string text) {
    int len = text.length();
    string ans = "";
    int i = 0;
    while(i < len){
        if(text[i] == '&'){
            
        }
            ans.push_back(text[i]);
            i++;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    cout << entityParser(s) << endl;
}