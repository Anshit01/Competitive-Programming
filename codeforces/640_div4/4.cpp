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
        f(i, 0, n){
            cin >> arr[i];
        }
        int a = arr[0], b = 0;
        int moves = 1;
        int len = n-1, start = 1, end = n;
        int lastcandy = arr[0];
        int sum = 0;
        bool leftmove = false;
        while(start < end){
            if(leftmove){
                sum += arr[start];
                a += arr[start];
                start++;
            }else{
                sum += arr[end-1];
                b += arr[end-1];
                end--;
            }
            if(sum > lastcandy){
                moves++;
                lastcandy = sum;
                sum = 0;
                leftmove = !leftmove;
            }
        }
        if(sum != 0){
            moves++;
        }
        dbg3(moves, a, b);
    }
}