#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl;

using namespace std;

int arr[4][4];

int main(){
    ios::sync_with_stdio(0);
    ll t, n, time, sum = 0, profit = 0;
    char c;
    cin >> t;
    while(t--){
        cin >> n;
        f(i, 0, 4){
            f(j, 0, 4){
                arr[i][j] = 0;
            }
        }
        f(i, 0, n){
            cin >> c >> time;
            int movie = int(c - 'A');
            time = (time/3) - 1;
            arr[movie][time]++;
        }
        int mmovie = 0, mtime = 0;
        profit = 0;
        f(l, 0, 4){
            mmovie = 0;
            mtime = 0;
            f(i, 0, 4){
                f(j, 0, 4){
                    if (arr[i][j] > arr[mmovie][mtime]){
                        mmovie = i;
                        mtime = j;
                    }
                }
            }
            int rate = (4-l)*25;
            profit += rate * arr[mmovie][mtime];
            if(arr[mmovie][mtime] == 0){
                profit -= 100;
            }
            f(time, 0, 4){
                arr[mmovie][time] = 0;
            }
            f(movie, 0, 4){
                arr[movie][mtime] = 0;
            }
        }
        sum += profit;
        cout << profit << endl;
    }
    cout << sum << endl;
}