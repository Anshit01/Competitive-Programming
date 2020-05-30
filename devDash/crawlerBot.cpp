#include <iostream>
using namespace std;

int main(){
    int n;
    char c;
    int x = 0, y = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c == 'A'){
            y--;
        }
        else if(c == 'S'){
            x--;
        }
        else if(c == 'W'){
            y++;
        }
        else if(c == 'D'){
            x++;
        }

    }
    if(x < 0){
        x = -x;
    }
    if(y < 0){
        y  = -y;
    }
    cout << (n - x - y) << endl;
}