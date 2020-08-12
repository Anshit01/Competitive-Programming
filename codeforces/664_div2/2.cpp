/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define what_is(x) cerr << #x << " is " << x << endl
#define dbg(x) cerr << x << endl
#define dbg2(x, y) cerr << x << ' ' << y << endl
#define dbg3(x, y, z) cerr << x << ' ' << y << ' ' << z << endl
#define inputArray(arr) f(i, 0, arr.size()) cin >> arr[i]
#define printArray(arr) f(i, 0, arr.size()) cout << arr[i] << ' '; cout << endl
#define mod 1000000007
// #define endl '\n'
#define print(x, y) cout << x << ' ' << y << '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    print(x, y);
    print(x, 1);
    f(i, 1, n+1){
        if(i != x){
            print(i, 1);
        }
    }
    f(j, 2, m+1){
        if(j % 2){
            f(i, 1, n+1){
                if(!(i == x && j == y)){
                    print(i, j);
                }
            }
        }else{
            f(i, n+1, 1){
                if(!(i == x && j == y)){
                    print(i, j);
                }
            }
        }
    }
    
}