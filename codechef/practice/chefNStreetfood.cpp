#include <iostream>
using namespace std;

int main(){
    int t, n, s, p, v;
    int profit, profitmax = 0;
    cin >> t;
    while(t--){
        profitmax = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> s >> p >> v;
            s++;
            profit = (p/s) * v;
            if(profit > profitmax){
                profitmax = profit;
            }
        }
        cout << profitmax << endl;
    }

}