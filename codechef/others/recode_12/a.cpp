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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        f(i, 0, n){
            cin >> arr[i];
        }
        map<int , int> mp;
        int prev = arr[0];
        mp[arr[0]] = 1;
        f(i, 1, n){
            if(prev != arr[i]){
                if(mp.find(arr[i]) == mp.end()){
                    mp[arr[i]] = 1;
                }
                else{
                    mp[arr[i]]++;
                }
                prev = arr[i];
            }else{
                prev = INT32_MAX;
            }
        }
        int mindish = 100000, maxval = 0;
        for(auto pr : mp){
            if(maxval < pr.second){
                maxval = pr.second;
                mindish = pr.first;
            }else if(maxval == pr.second && mindish > pr.first){
                mindish = pr.first;
            }
        }
        cout << mindish << endl;
    }
}