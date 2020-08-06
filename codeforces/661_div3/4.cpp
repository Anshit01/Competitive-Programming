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
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        string s;
        cin >> s;
        int k = 1;
        int ki = 0;
        vector<int> arr(n);
        vector<char> lastarr(n);
        arr[0] = 1;
        lastarr[0] = s[0];
        f(i, 1, n){
            if(lastarr[ki] != s[i]){
                ki = 0;
            }
            bool flag = false;
            f(j, ki, k){
                if(lastarr[j] != s[i]){
                    ki = j;
                    lastarr[j] = s[i];
                    flag = true;
                    break;
                }
            }
            if(!flag){
                
                ki = k;
                k++;
                lastarr[ki] = s[i];
            }
            arr[i] = ki+1;
        }
        cout << k << endl;
        f(i, 0, n){
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
}