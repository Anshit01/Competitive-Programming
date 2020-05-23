#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

bool contains(int arr[], int n, int target){
    f(i, 0, n){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int arr[n], rep[k];
        f(i, 0, n){
            cin >> arr[i];
        }
        f(i, 0, k){
            rep[i] = arr[i];
        }
        vector<int> ans;
        int ki = 0, ni = k;
        f(i, 0, k){
            ans.push_back(rep[i]);
        }
        bool flag = true;
        while(ni < n){
            if(contains(rep, k, arr[ni])){
                f(i, 0, k){
                    ans.push_back(rep[i]);
                }
                ni++;
            }else{
                flag = false;
                break;
            }
        }
        if(flag){
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