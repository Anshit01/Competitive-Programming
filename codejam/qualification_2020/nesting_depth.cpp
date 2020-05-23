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
    f(x, 1, t+1){
        cin >> s;
        int opened = 0;
        int len = s.length();
        int arr[len];
        f(i, 0, len){
            arr[i] = (int)(s[i] - '0');
        }
        cout << "Case #" << x << ": ";
        f(i, 0, len){
            int diff = arr[i] - opened;
            if(diff > 0){
                f(j, 0, diff){
                    cout << '(';
                    opened++;
                }
            }
            else if(diff < 0){
                diff = 0 - diff;
                f(j, 0, diff){
                    cout << ')';
                    opened--;
                }
            }
            cout << arr[i];
        }
        f(j, 0, opened){
            cout << ')';
        }
        cout << endl;
    }
}