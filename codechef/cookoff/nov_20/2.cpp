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
        string a, b;
        cin >> a >> b;
        int n = a.size();
        string a1, a2, b1, b2;
        f(i, 0, n){
            if(i%2 == 0){
                a1.push_back(a[i]);
                b1.push_back(b[i]);
            }else{
                a2.push_back(a[i]);
                b2.push_back(b[i]);
            }
        }
        int cnt = 0;
        bool active = false;
        f(i, 0, a1.size()){
            if(a1[i] != b1[i] && active == false){
                active = true;
                cnt++;
            }else if(a1[i] == b1[i] && active){
                active = false;
            }
        }
        active = false;
        f(i, 0, a2.size()){
            if(a2[i] != b2[i] && active == false){
                active = true;
                cnt++;
            }else if(a2[i] == b2[i] && active){
                active = false;
            }
        }
        cout << cnt << endl;
    }
}