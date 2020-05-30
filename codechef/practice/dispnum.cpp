#include <iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int num1, num7;
        if(n%2 == 0){
            num1 = n/2;
            num7 = 0;
        }
        else{
            num1 = (n/2)-1;
            num7 = 1;
        }
        if(num7){
            cout << "7";
        }
        while(num1--){
            cout << "1";
        }
        cout << "\n";
    }
}