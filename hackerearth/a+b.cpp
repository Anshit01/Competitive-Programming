/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

inline void strRev(string& s){
    int n = s.size();
    for(int i = 0; i < n/2; i++){
        swap(s[i], s[n-i-1]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string line;
    string a, b;
    while(getline(cin, line)){
        int mid = 0;
        while(line[mid] != ' '){
            mid++;
        }
        a = line.substr(0, mid);
        b = line.substr(mid+1);
        strRev(a);
        strRev(b);
        if(a.size() < b.size()){
            swap(a, b);
        }
        while(b.size() < a.size()){
            b.push_back('0');
        }
        int carry = 0, sum;
        for(int i = 0; i < a.size(); i++){
            sum = a[i] + b[i] - 2*'0' + carry;
            carry = sum / 10;
            a[i] = (sum % 10) + '0';
        }
        if(carry != 0){
            a.push_back(carry + '0');
        }
        strRev(a);
        cout << a << endl;
    }
}