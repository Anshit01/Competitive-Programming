#include <iostream>
using namespace std;

int main(){
    int t, n, a;
    cin >> t;
    while(t--){
        bool allOdd = true, allEven = true;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(a % 2 == 0){
                allOdd = false;
            }
            else{
                allEven = false;
            }
        }
        if(allEven){
            cout << "NO\n";
        }
        else if(allOdd){
            if(n%2 == 0){
                cout << "NO\n";
            }
            else{
                cout << "YES\n";
            }
        }
        else{
            cout << "YES\n";
        }
    }
}