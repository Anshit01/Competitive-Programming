/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--){
        int h, c, t;
        cin >> h >> c >> t;
        int count = 1;
        double temp = 0.0;
        double meanTemp = (double)(h+c)/2;
        if(t == h){
            cout << 1 << endl;
        }else if(t == (int)meanTemp && (h+c)%2 == 0){
            cout << 2 << endl;
        }else if(t < meanTemp){
            cout << 2 << endl;
        }else{
            double prevTemp = h;
            while(true){
                temp = (double)((count+1) * meanTemp + h)/(double)(count+2);
                count += 2;
                if(temp == t){
                    cout << count << endl;
                    break;
                }else if(temp < t){
                    if(t - temp < prevTemp - t){
                        cout << count << endl;
                    }else{
                        cout << count - 2 << endl;
                    }
                    break;
                }
                prevTemp = temp;
            }
        }
    }
}