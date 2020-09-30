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
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a1(n), a2(n), a3(n);
        inputArray(a1);
        inputArray(a2);
        inputArray(a3);
        int first = a1[0];
        int last = -1, slast = -2;
        f(i, 0, n-1){
            if(a1[i] != last && a1[i] != slast){
                slast = last;
                last = a1[i];
            }else if(a2[i] != last && a2[i] != slast){
                slast = last;
                last = a2[i];
            }else{
                slast = last;
                last = a3[i];
            }
            cout << last << ' ';
        }
        if(a1[n-1] != last && a1[n-1] != first){
                slast = last;
            last = a1[n-1];
        }else if(a2[n-1] != last && a2[n-1] !=first){
            slast = last;
            last = a2[n-1];
        }else{
            slast = last;
            last = a3[n-1];
        }
        cout << last << ' ';
        cout << endl;
    }
}