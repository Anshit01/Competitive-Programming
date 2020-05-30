#include <iostream>
using namespace std;

void withdef(int numa){
    int i;
    for(int i = 20; i < (numa += numa + 1); i += 5){
        cout << i << ",";

    }
    cout <<endl;
}

void control(int num){
    
}

int main(){
    int num = 20;
    withdef(num);
}