#include <iostream>

using namespace std;

int main(){
    int t, n, min, other;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> min;
        for(int i = 0; i < n-1; i++){
            cin >>other;
            if(min > other){
                min = other;
            }
        }
        cout << min << endl;
    }
}