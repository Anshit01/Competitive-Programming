/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
//#define int long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
using namespace std;

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    vector<bool> check(n+1, false);
    f(i, 1, n){
        int a, b;
        cout << "? " << i << ' ' << i+1 << endl;
        cout.flush();
        cin >> a;
        cout << "? " << i+1 << ' ' << i << endl;
        cout.flush();
        cin >> b;
        if(a == -1 || b == -1){
            return 0;
        }
        if(a > b){
            arr[i-1] = a;
            check[a] = true;
        }else if(b > a){
            arr[i] = b;
            check[b] = true;
        }else{
            if(arr[i-1] == 0){
                arr[i-1] = INT_MAX;
            }else{
                arr[i] = INT_MAX;
            }
        }
    }
    int d = 0, pos = 0;
    f(i, 1, n+1){
        if(!check[i]){
            d = i;
        }
        if(arr[i-1] == 0){
            pos = i-1;
        }else if(arr[i-1] == INT_MAX){
            if(check[1]){
                arr[i-1] = 2;
            }else{
                arr[i-1] = 1;
            }
        }
    }
    arr[pos] = d;
    cout << "! ";
    f(i, 0, arr.size()){
        cout << arr[i] << ' ';
    }
    cout << endl;
    cout.flush();
}