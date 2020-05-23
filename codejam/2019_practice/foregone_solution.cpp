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
    string num;
    cin >> t;
    f(x, 1, t+1){
        cin >> num;
        int len = num.length();
        char arr1[len], arr2[len];
        f(i, 0, len){
            if(num[i] == '4'){
                arr1[i] = '3';
                arr2[i] = '1';
            }
            else{
                arr1[i] = num[i];
                arr2[i] = '0';
            }
        }
        cout << "Case #" << x << ": ";
        f(i, 0, len){
            cout << arr1[i];
        }
        cout << ' ';
        int i = 0;
        while(arr2[i] == '0'){
            i++;
        }
        for(;i < len; i++){
            cout << arr2[i];
        }
        cout << endl;
    }
}