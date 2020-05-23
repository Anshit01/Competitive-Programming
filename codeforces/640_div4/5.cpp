#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

unordered_map<int , int> sums;

bool isSpecial(vector<int>& arr, int n, int arri){
    int sum = arr[0];
    int k = arr[arri];
    if(n > 1){
        sum += arr[1];
        if(sum == k){
            return true;
        }
    }
    auto pr = sums.find(k);
    if(pr != sums.end()){
        if(sums.find(k)->second != 0){
            return true;
        }
    }
    f(i, 2, n){
        sum += arr[i];
        pr = sums.find(sum - k);
        if(pr != sums.end()){
            int p = pr->second;
            if(p != i-1){
                return true;
            }
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        sums.clear();
        vector<int> arr(n);
        f(i, 0, n){
            cin >> arr[i];
        }
        int sum = 0;
        f(i, 0, n){
            sum += arr[i];
            sums[sum] = i;
        }
        int count = 0;
        f(i, 0, n){
            if(isSpecial(arr, n, i)){
                count++;
            }
        }
        cout << count << endl;
    }
}