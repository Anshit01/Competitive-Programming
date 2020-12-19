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
#define endl '\n'
using namespace std;

bool isPossible(int n, vector<int>& arr, int k){
    int avail = 0;
    int last = 2*n;
    f(i, n, k-1){
        avail += max(0, last - arr[i] - 1);
        last = arr[i];
    }
    f(i, k, 0){
        avail += max(0, last - arr[i] - 1);
        avail--;
        if(avail < 0){
            return false;
        }
        last = arr[i];
    }
    return true;
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
        int ans = 1;
        int l = 0, r = n;
        int mid;
        while(l <= r){
            mid = l + (r-l)/2;
            if(isPossible(n, arr, mid)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        bool flag = true;
        int avail = 1;
        int last = 0;
        f(i, 0, n){
            avail += max(0, arr[i] - last - 1);
            avail--;
            if(avail < 0){
                flag = false;
                break;
            }
        }
        if(flag) ans++;
        
        cout << ans << endl;
    }
}