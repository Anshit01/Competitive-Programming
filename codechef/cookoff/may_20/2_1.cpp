/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int n = str.length();
        int count = 0;
        for(int i = 2; i < n; i += 2){
            string s1 = str.substr(0, i/2);
            string s2 = str.substr(i/2, i/2);
            string s3 = str.substr(i, (n-i)/2);
            string s4 = str.substr((n+i)/2, (n-i)/2);
            if(s1 == s2 && s3 == s4){
                count++;
            }
        }
        cout << count << endl;
    }
}