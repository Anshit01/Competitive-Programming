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
        map<int, vector<int>> mp;
        f(i, 0, n){
            cin >> arr[i];
            mp[arr[i]].push_back(i);
        }
        auto itr = mp.begin();
        int count = 1;
        int lasti = itr->second[0];
        itr++;
        for(; itr != mp.end(); itr++){
            if(lasti > itr->second[itr->second.size() - 1]){
                count++;
                lasti = itr->second[0];
            } else{
                lasti = *upper_bound(itr->second.begin(), itr->second.end(), lasti);
            }
        }
        cout << count << endl;
        
        
    }
}