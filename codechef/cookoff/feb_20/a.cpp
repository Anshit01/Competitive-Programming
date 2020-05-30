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
    int t, n, k;
    cin >> t;
    char c;
    while(t--){
        cin >> n >> k;
        int arr[n];
        int head = 0;
        bool ishead = true;
        f(i, 0, n){
            cin >> c;
            arr[i] = (c == 'H')? 1 : 0;
        }
        f(i, 0, k){
            n--;
            if(arr[n]){
                f(j, 0, n){
                    arr[j] = !arr[j];
                }
            }
        }
        f(i, 0, n){
            if(arr[i]){
                head++;
            }

        }
        cout << head << endl;

    }
}