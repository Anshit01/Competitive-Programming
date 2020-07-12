/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    f(a, 1, n+1){
        int prod = 0;
        int cnt = 0;
        int i = 1;
        while(prod < n){
            int j = 1;
            while(prod < n){
                int k = 1;
                while(prod < n){
                    prod = i*i + j*j + k*k + i*j + j*k + i*k;
                    if(prod == a){
                        // if(i == j && j == k){
                        //     cnt++;
                        // }else if(i != j && j != k && i != k){
                        //     cnt += 6;
                        // }else{
                        //     cnt += 3;
                        // }
                        cnt++;
                    }
                    k++;
                }
                prod = i*i + j*j + 1*1 + i*j + j*1 + i*1;
                j++;
            }
            prod = i*i + 1 + 1 + i*1 + 1 + i*1;
            i++;
        }
        cout << cnt << ", ";
    }
}