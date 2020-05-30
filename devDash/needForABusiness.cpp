#include <iostream>
using namespace std;

int main(){
    int t;
    int nbread, nveg, nchic, rveg, rchic, profit;
    cin >> t;
    while(t--){
        cin >> nbread >> nveg >> nchic >> rveg >> rchic;
        nbread /= 2;
        
        if (rveg >= rchic){
            if (nbread >= nveg){
                profit = rveg * nveg;
                nbread -= nchic;
                profit += rchic * nbread;
            }
            else{
                profit = rveg + nbread;
            }
        }
        else{
            if (nbread >= nchic){
                profit = rchic * nchic;
                nbread -= nchic;
                profit += rveg * nbread;
            }
            else{
                profit = rchic + nbread;
            }
        }
        cout << profit << endl;
    }
}