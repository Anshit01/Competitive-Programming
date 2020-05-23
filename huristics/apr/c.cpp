#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

int _lis( int arr[], int n, int *max_ref) 
{ 
    if (n == 1) 
        return 1; 
  
    int res, max_ending_here = 1;  

    for (int i = 1; i < n; i++) 
    { 
        res = _lis(arr, i, max_ref); 
        if (arr[i-1] < arr[n-1] && res + 1 > max_ending_here) 
            max_ending_here = res + 1; 
    } 
  
    if (*max_ref < max_ending_here) 
       *max_ref = max_ending_here; 
  
    return max_ending_here; 
} 
  
int lis(int arr[], int n) 
{ 
    int max = 1; 
  
    _lis( arr, n, &max ); 
  
    return max; 
} 


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    f(i, 0, n){
        cin >> arr[i];
    }
    cout << lis(arr, n) << endl;
}