#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define fastio() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
using namespace std;

int main(){
    fastio();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1){
            printf("1\n1 1\n");
        }
        else if(n == 2){
            printf("1\n2 1 2\n");
        }
        else if(n >= 3){
            printf("%d\n3 1 2 3\n", n/2);
            for(int i = 4; i < n; i += 2){
                printf("2 %d %d\n", i, i+1);
            }
            if(n%2 == 0){
                printf("1 %d\n", n);
            }
        }
        
    }
}