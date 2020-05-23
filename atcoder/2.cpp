#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool is_palindrome(string s, int start, int end){
    f(i, start, end/2){
        if(s.at(i) != s.at(end-i-1)){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    int l = s.length();
    if(is_palindrome(s, 0, l) and is_palindrome(s, 0, (l-1)/2) and is_palindrome(s, (l+3)/2, l)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}