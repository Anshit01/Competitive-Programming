#include <iostream>
using namespace std;

int main(){
    int n;
    int pos[100], fire[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> pos[i];
        cin >> fire[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(pos[i] + fire[i] == pos[j]){
                if(pos[j] + fire[j] == pos[i]){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
}