#include <iostream>

using namespace std;

int main(){
    int a, b;
    while(true){
        cin >> a;
        cin >> b;
        cout << " " << "   " << a << "   " << b << endl;
        int c = b - a + 10;
        for(int i = 1; i < c; i++){
            cout << i << "   " << a%i << "   " << b%i << "              ";
            if(a%i == b%i){
                cout << i;
            }
            cout << endl;
        }
    }
}