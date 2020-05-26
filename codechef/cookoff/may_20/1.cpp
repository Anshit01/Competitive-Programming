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
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        set<int> qty;
        map<int, int> ing;
        ing.insert({arr[0], 1});
        bool flag = true;
        for(int i = 1; i < n; i++){
            if(arr[i-1] == arr[i]){
                ing[arr[i]]++;
            }else{
                
                if(ing.find(arr[i]) != ing.end() || qty.find(ing[arr[i-1]]) != qty.end()){
                    flag = false;
                    break;
                }
                qty.insert(ing[arr[i-1]]);
                ing[arr[i]] = 1;
            }
        }
        if(qty.find(ing[arr[n-1]]) != qty.end()){
            flag = false;
        }
        cout << ((flag)? "YES" : "NO") << endl;
    }
}