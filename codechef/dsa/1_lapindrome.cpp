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
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        int len = s.length();
        char arr[len];
        f(i, 0, len){
            arr[i] = s[i];
        }
        sort(arr, arr+len/2);
        sort(arr + len - (len/2), arr + len);
        bool flag = true;
        f(i, 0, len/2){
            if(arr[i] != arr[len - (len/2) + i]){
                flag = false;
                break;
            }
        }
        cout << ((flag) ? "YES" : "NO") << endl;
    }
}