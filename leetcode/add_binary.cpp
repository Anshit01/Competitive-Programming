#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

string addBinary(string a, string b) {
    int la = a.length(), lb = b.length();
    string s = "";
    s.reserve(((la > lb)? la : lb) + 2);
    int i = 1;
    int carry = 0, sum;
    while(i <= la or i <= lb){
        sum = carry;
        if(i <= la){
            sum += a[la-i]-'0';
        }
        if(i <= lb){
            sum += b[lb-i]-'0';
        }
        if(sum == 0 or sum == 2){
            s.push_back('0');
        }
        else{
            s.push_back('1');
        }
        if(sum > 1){
            carry = 1;
        }
        else{
            carry = 0;
        }
        i++;
    }
    if(carry == 1){
        s.push_back('1');
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    ios::sync_with_stdio(0);
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b) << endl;
}