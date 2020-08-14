/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> arr(n+1);
        f(i, 0, n){
            arr[i] = s[i] - '0';
        }
        arr[n] = 1e8;
        ll ans = 0;
        ll sum = arr[0];
        int l = 0, r = 0;
        int len = 0;
        while(r < n){
            len = r - l + 1;
            if(len == sum){
                ans++;
                r++;
                if(r == n){
                    break;
                }
                sum += arr[r];
            }else if(len < sum){
                r++;
                if(r == n){
                    break;
                }
                sum += arr[r];
            }else{
                sum -= arr[l];
                l++;
            }
        }
        while(l < n){
            sum -= arr[l];
            l++;
            len = r - l;
            if(l < n && sum == len){
                ans++;
            }
        }   
        cout << ans << endl;
    }
}