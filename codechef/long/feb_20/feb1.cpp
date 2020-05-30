#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        ll sum = 0;
        cin >> n;
        int *arr = new int[n];
        int *arr2 = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }
        sort(arr, arr+n);
        sort(arr2, arr2+n);
        for(int i = 0; i < n; i++){
            if(arr[i] < arr2[i]){
                sum += arr[i];
            }
            else {
                sum += arr2[i];
            }
        }
        cout << sum << endl;
    }
}