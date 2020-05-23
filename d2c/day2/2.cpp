#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

void selection_sort(double* arr, int n, int* arr2, int* arr3, int* arr4){
    int min_index;
    for(int i = 0; i < n-1; i++){
        min_index = i;
        for(int j = i; j < n; j++){
            if(arr[min_index] < arr[j])
                min_index = j;
            else{
                if(arr[min_index] == arr[j] && arr3[min_index] < arr3[j]){
                    min_index = j;
                }
            }
        }
        arr[i] = arr[i] + arr[min_index] - (arr[min_index] = arr[i]);
        arr2[i] = arr2[i] + arr2[min_index] - (arr2[min_index] = arr2[i]);
        arr3[i] = arr3[i] + arr3[min_index] - (arr3[min_index] = arr3[i]);
        arr4[i] = arr4[i] + arr4[min_index] - (arr4[min_index] = arr4[i]);
    }
}

int main(){
    ios::sync_with_stdio(0);
    int n, money;
    
        cin >> n >> money;
        int price[n], imp[n], num[n];
        f(i, 0, n){
            cin >> price[i];
        }
        f(i, 0, n){
            cin >> imp[i];
        }
        f(i, 0, n){
            cin >> num[i];
        }
        double imp_per_price[n];
        f(i, 0, n){
            imp_per_price[i] = double(double(imp[i]) / double(price[i]));
        }
        selection_sort(imp_per_price, n, imp, price, num);
        int net_val = 0;
        int i = 0;
        while(money > 0){
            int qty = 0;
            if(num[i]*price[i] >= money){
                qty = money / price[i];
                money -= price[i] * qty;
                net_val += qty * imp[i];
            }
            else{
                money -= price[i] * num[i];
                net_val += num[i] * imp[i];
            }


            i++;
        }
        cout << net_val << endl;
    
}