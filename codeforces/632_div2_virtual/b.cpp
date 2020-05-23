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
        int arr1[n], arr2[n];
        f(i, 0, n){
            cin >> arr1[i];
        }
        f(i, 0, n){
            cin >> arr2[i];
        }
        bool flag = true;
        bool is1 = false, isn1 = false;
        f(i, 0, n){
            if(arr1[i] == arr2[i] or (is1 and arr2[i] > arr1[i]) or (isn1 and arr1[i] > arr2[i])){
                
            }
            else{
                flag = false;
                break;
            }
            if(arr1[i] == 1) is1 = true;
            if(arr1[i] == -1) isn1 = true;
            if(is1 and isn1)  break;
        }
        cout << ((flag)? "YES" : "NO") << endl;
    }
}