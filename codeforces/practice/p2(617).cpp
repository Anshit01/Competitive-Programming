#include <iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int sum = 0;
        while(n >9){
            sum += ((int)(n/10))*10;
            n = (n/10) + (n%10);
        }
        sum += n;
        cout << sum << endl;
        
    }
}