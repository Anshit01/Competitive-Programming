/* *>>>>>Anshit_Bhardwaj<<<<<* */
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
// #define int long long
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
        ll W;
        cin >> W;
        ll Whalf = (W+1)/2;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        vector<pair<int, int>> weights(n);
        f(i, 0, n){
            weights[i] = {arr[i], i+1};
        }
        sort(weights.begin(), weights.end());
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int itr = upper_bound(arr.begin(), arr.end(), W) - arr.begin();
        itr--;
        if(itr < 0){
            cout << -1 << endl;
            continue;
        }
        if(weights[itr].first >= Whalf){
            cout << 1 << endl;
            cout << weights[itr].second << endl;
        }else{
            ll sum = 0;
            for(int i = itr; i >= 0; i--){
                sum += weights[i].first;
                ans.push_back(weights[i].second);
                if(sum >= Whalf){
                    break;
                }
            }
            if(sum >= Whalf){
                cout << ans.size() << endl;
                for(int x : ans){
                    cout << x << ' ';
                }
                cout << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }
}