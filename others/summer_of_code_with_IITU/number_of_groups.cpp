/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> arr(n);
    vector<pair<string, string>> ds(n);
    set<pair<string, string>> st;
    f(i, 0, n){
        cin >> arr[i];
        string odd, even;
        f(j, 0, arr[i].size()){
            
            if(j & 1){
                odd.push_back(arr[i][j]);
            }else{
                even.push_back(arr[i][j]);
            }
            
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        ds[i] = {odd, even};
        st.insert(ds[i]);
    }
    cout << st.size() << endl;
}