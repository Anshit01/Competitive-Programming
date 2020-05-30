#include <iostream>
using namespace std;

int diff(int a, int b){
    if(a > b){
        return a-b;
    }
    return b - a;
}

int main(){
    int t;
    long long n, a, b, c, f;
    long long time, mintime;
    cin >> t;
    while(t--){
        cin >> n >> a >> b >> c;
        cin >> f;
        time = diff(b, f) + c + diff(f, a);
        mintime = time;
        for(int i = 0; i < n-1; i++){
            cin >> f;
            time = diff(b, f) + c + diff(f, a);
            if(time < mintime){
                mintime = time;
            }
        }
        cout << mintime <<endl;
    }
}