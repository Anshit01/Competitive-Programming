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
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int arr[n], rep[k];
        set<int> reps;
        f(i, 0, n){
            cin >> arr[i];
        }
        f(i, 0, k){
            rep[i] = arr[i];
            reps.insert(arr[i]);
        }
        bool flag = true;
        for(int i = k; i < n; i++){
            if(reps.find(arr[i]) == reps.end()){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout << -1 << endl;
        }else{
            int ni = 0, l = 0;
            vector<int> ans;
            for(int i = 0; i < n-k+1 && ni < n; i++){
                for(int j = 0; j < k && ni < n; j++){
                    if(rep[j] == arr[ni]){
                        ni++;
                    }
                    l++;
                    ans.push_back(rep[j]);
                }
            }
            cout << l << endl;
            for(int x : ans){
                cout << x << ' ';
            }
            cout << endl;
        }
    }
}