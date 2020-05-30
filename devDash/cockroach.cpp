#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, cost[200001], next[200001];
    cin >> n;
    int max = 0;
    for(int i = 1; i <= n; i++){
        cin >> cost[i] >> next[i];
    }
    int min;
    for(int i = 1; i <= n; i++){
        vector<int> list;
        int index = i;
        
        for(int j = 0; j < n; j++){
            bool exit = false;
            list.push_back(i);
            index = next[index];
            int l = list.size();
            for(int k = 0; k < l; k++){
                if(list.at(k) == index){
                    exit == true;
                    break;
                }
            }
            if(exit){
                break;
            }
        }
        int l = list.size();
        min = cost[list.at(0)];
        for(int j = 0; j < l; j++){
            if(min > cost[list.at(j)]){
                min = cost[list.at(j)];
            }
        }
        if(min > max){
            max = min;
        }
    }
    cout << max <<endl;
}