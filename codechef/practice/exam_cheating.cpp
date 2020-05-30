#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        int ans = 0;
        cin >> a;
        cin >> b;
        a--;
        b--;
        if(a > b){
            int c = a;
            a = b;
            b = c;
        }
        int c = b - a;
        int sq = sqrt(c);
        for(int i = 1; i <= sq; i++){
            if(c % i == 0){
                ans += 2;
            }
        }
        if(sq * sq == c){
            ans--;
        }
        cout << ans << endl;
    }
}