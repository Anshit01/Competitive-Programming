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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int k;
        cin >> k;

        int arr[n];
        f(i, 0, n){
            cin >> arr[i];
        }
        int len = n/k;
        if(n%k != 0) len++;
        int twod[k][len];
        int i = 0;
        f(li, 0, len){
            f(ki, 0, k){
                if(i >= n){
                    twod[ki][li] = INT32_MAX;
                }
                else{
                    twod[ki][li] = arr[i];
                }

                i++;
            }
        }
        f(ki, 0, k){
            sort(twod[ki], twod[ki] + len);
        }
        i = 0;
        int arrSorted[k*len];
        f(li, 0, len){
            f(ki, 0, k){
                arrSorted[i] = twod[ki][li];
                i++;
            }
        }
        bool flag = true;
        f(i, 1, n){
            if(arrSorted[i-1] > arrSorted[i]){
                flag = false;
                break;
            }
        }
        cout << ((flag) ? "yes" : "no") << endl;
    }
}