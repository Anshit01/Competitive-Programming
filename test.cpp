#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> dq;
    
	int T;
	cin >> T;
	while(T--){
        int n;
        int oddsum = 0, evensum = 0;
        cin >> n;
        while(n > 0){
            int d = n % 10;
            if(d % 2 == 0){
                evensum += d;
            }else{
                oddsum += d;
            }
            n /= 10;
        }
        if(evensum % 4 == 0 || oddsum % 3 == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}