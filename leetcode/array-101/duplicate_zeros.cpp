#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

void duplicateZeros(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    for(int i = 0; i < n - count - 1; i++){
        if(arr[i] == 0){
            count++;
        }
    }
    if(count > 0){
        for(int i = n-1; i >= 0; i--){
            arr[i] = arr[i-count];
            if(arr[i] == 0 && i > 0){
                arr[i-1] = 0;
                i--;
                count--;
                if(count == 0) break;
            }
        }
    }
}

int main(){
    vector<int> arr({8,4,5,0,0,0,0,7});
    duplicateZeros(arr);
    for(int x : arr){
        cout << x <<  ' ';
    }
    cout << endl;
}