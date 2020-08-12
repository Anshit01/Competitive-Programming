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
using namespace std;

int min3(int a, int b, int c){
    return min(min(a, b), c);
}

int countEven(int a, int b, int c, int d){
    int ans = 0;
    if(a % 2 == 0){
        ans++;
    }
    if(b % 2 == 0){
        ans++;
    }
    if(c % 2 == 0){
        ans++;
    }
    if(d % 2 == 0){
        ans++;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag = false;
        if(countEven(a, b, c, d) >= 3){
            flag = true;
        }else if(min3(a, b, c) > 0){
            a--;
            b--;
            c--;
            d += 3;
            if(countEven(a, b, c, d) >= 3){
                flag = true;
            }
        }
        cout << ((flag)? "YES" : "NO") << endl;
    }
}