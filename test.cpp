// #include<bits/stdc++.h>
// using namespace std;

// void merge(vector<int>& a, int l, int m, int r){
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     vector<int> left(n1);
//     vector<int> right(n2);
//     for(int i = 0; i < n1; i++){
//         left[i] = a[l+i];
//     }
//     for(int j = 0; j < n2; j++){
//         right[j] = a[m+1+j];
//     }
//     int i = 0, j = 0, k = l;
//     while(i < n1 && j < n2){
//         if(left[i] < right[j]){
//             a[k] = left[i];
//             i++;
//         }else{
//             a[k] = right[j];
//             j++;
//         }
//         k++;
//     }
//     while(i < n1){
//         a[k] = left[i];
//         i++;
//         k++;
//     }
//     while(j < n2){
//         a[k] = right[j];
//         k++;
//         j++;
//     }
// }

// void mergesort(vector<int>& a, int l, int r){
//     if(l >= r){
//         return;
//     }
//     int m = l + (r-l)/2;
//     mergesort(a, l, m);
//     mergesort(a, m+1, r);
//     merge(a, l, m, r);
// }

// void printarr(vector<int> arr){
//     for(int i = 0; i < arr.size(); i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // int main(){
// //     int n;
// //     cin >> n;
// //     vector<int> a(n);
// //     for(int i = 0; i < a.size(); i++){
// //         cin >> a[i];
// //     }
// //     mergesort(a, 0, a.size()-1);
// //     printarr(a);
// // }


// int main(){
//     vector<char> vov({'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'});
//     int n;
//     cin >> n;
//     vector<char> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int cnt = 0;
//     for(int i = 0; i < n; i++){
//         bool flag = true;
//         for(char c : vov){
//             if(c == arr[i]){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag) cnt++;
//     }
//     cout << cnt << endl;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    char vov[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int n;
    cin >> n;
    vector<char> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = 0; j < 10; j++){
            if(vov[j] == arr[i]){
                flag = false;
                break;
            }
        }
        if(flag) cnt++;
    }
    cout << cnt << endl;
}