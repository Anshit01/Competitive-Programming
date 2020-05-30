#include <iostream>
using namespace std;

int main(){
    double number = 7583241;
    int first = 0;
    int second = 0;
    while(number > 0){
        int r = ((int)number) % 10;
        if(r%2 == 0)
            first += r;
        else
            second += r;
        number = number / 10;
    }

        cout << first - second;
}