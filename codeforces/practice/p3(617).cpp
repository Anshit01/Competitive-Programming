#include <iostream>
using namespace std;

int main(){
    int t, n;
    char c;
    cin >> t;
    while(t--){
        cin >> n;
        string arr;
        cin >> arr;
        int start = 0, end = n , x= 0, y = 0;
        for(int i = 0; i < n; i++){
            x = 0;
            y = 0;
            for(int j = i; j < end - start; j++){
                if(arr[j] == 'R')
                    x++;
                else if(arr[j] == 'L')
                    x--;
                else if(arr[j] == 'U')
                    y++;
                else if(arr[j] == 'D')
                    y--;
                if(x == 0 && y == 0 && end - start > j - i){
                    start = i;
                    end = j;
                    break;
                }
            }
        }
        if(start == 0 && end == n){
            cout << "-1\n";
        }
        else{
            cout << (start + 1) << " " << (end + 1) << endl;
        }
    }
}