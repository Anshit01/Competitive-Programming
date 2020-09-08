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

inline void rem(vector<int>& arr, int i){
    f(j, i, arr.size()){
        arr[j] = arr[j+1];
    }
    arr.pop_back();
}

int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> arr(n);
        inputArray(arr);
        int maxat = 0;
        f(i, 0, n){
            if(arr[i] > arr[maxat]){
                maxat = i;
            }
        }
        vector<int> ans;
        ans.push_back(arr[maxat]);
        rem(arr, maxat);
        int gcd = ans[0];
        f(j, 1, n){
            int gmax = 1;
            maxat = 0;
            f(i, 0, arr.size()){
                if(__gcd(gcd, arr[i]) > gmax){
                    maxat = i;
                    gmax = __gcd(gcd, arr[i]);
                }
            }
            ans.push_back(arr[maxat]);
            gcd = __gcd(gcd, arr[maxat]);
            rem(arr, maxat);
        }
        printArray(ans);
    }
}