#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

void swap(char *a, char *b){
    *b = *a + *b - (*a = *b);
}

char change(char c){
    if(c == '9'){
        c = '1';
    }
    else{
        c++;
    }
    return c;
}

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        char c;
        char arr[9][9];
        f(i, 0, 9){
            f(j, 0, 9){
                cin >> arr[i][j];
            }
        }
        swap(&arr[0][0], &arr[2][2]);
        swap(&arr[3][3], &arr[5][5]);
        swap(&arr[6][6], &arr[8][8]);
        arr[1][1] = change(arr[1][1]);
        arr[4][4] = change(arr[4][4]);
        arr[7][7] = change(arr[7][7]);
        f(i, 0, 9){
            f(j, 0, 9){
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}