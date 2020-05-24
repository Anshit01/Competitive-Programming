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
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    f(i, 0, n){
        cin >> arr[i];
    }
    int len = 1, toremove = -1, start = 0, end = 0, maxlen = 0;
    int previ = 0;
    f(i, 1, n){
        if(arr[i] > arr[previ]){
            previ = i;
            len++;
        }else{
            if(toremove == -1){
                toremove = i;
                if(i+1 < n && arr[i+1] <= arr[i-1]){
                    previ = i;
                }
            }else{
                if(maxlen < len){
                    maxlen = len;
                }
                start = toremove;
                toremove = i;
                len = toremove - start;
                previ = i;
            }
        }
    }
    if(maxlen < len){
        maxlen = len;
    }
    cout << maxlen << endl;
}