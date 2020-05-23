#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int revMaxSubarray(int arr[], int n){
    int prev = 0, start = 0, toremove = -1, maxlen = 0;
    int i = 1;
    while(i < n){
        if(arr[i - 1] <= arr[i]){
            toremove = i;
            prev = i - 1;
            break;
        }
        i++;
    }
    i++;
    if(i >= n){
        if(toremove == -1){
            maxlen = n;
        }else{
            maxlen = n-1;
        }
    }
    while(i < n){
        if(arr[i] < arr[prev]){
            prev = i;
        }else{
            if(maxlen < i - start - 1){
                maxlen = i - start - 1;
            }
            if(arr[toremove] < arr[toremove + 1]){
                start = toremove;
            }
            else{
                start = toremove + 1;
            }
            toremove = i;
        }
        
        i++;
    }
    if(maxlen < i - start - 1){
        maxlen = i - start - 1;
    }
    return maxlen;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n], revarr[n];
    f(i, 0, n){
        cin >> arr[i];
        revarr[n-i-1] = arr[i];
    }
    int prev = 0, start = 0, toremove = -1, maxlen = 0;
    int i = 1;
    while(i < n){
        if(arr[i - 1] >= arr[i]){
            toremove = i;
            prev = i - 1;
            break;
        }
        i++;
    }
    i++;
    if(i >= n){
        if(toremove == -1){
            maxlen = n;
        }else{
            maxlen = n-1;
        }
    }
    while(i < n){
        if(arr[i] > arr[prev]){
            prev = i;
        }else{
            if(maxlen < i - start - 1){
                maxlen = i - start - 1;
            }
            if(arr[toremove] < arr[toremove + 1]){
                start = toremove;
            }
            else{
                start = toremove + 1;
            }
            toremove = i;
        }
        
        i++;
    }
    if(maxlen < i - start - 1){
        maxlen = i - start - 1;
    }
    maxlen = max(revMaxSubarray(revarr, n), maxlen);
    cout << maxlen << endl;
}