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
    vector<int> arr(100001, 0);
    int a;
    int cnt2 = 0, cnt4 = 0, cnt6 = 0, cnt8 = 0;
    f(i, 0, n){
        cin >> a;
        arr[a]++;
        if(arr[a] == 8){
            cnt8++;
            cnt6--;
        }else if(arr[a] == 6){
            cnt6++;
            cnt4--;
        }else if(arr[a] == 4){
            cnt4++;
            cnt2--;
        }else if(arr[a] == 2){
            cnt2++;
        }

    }
    int q;
    cin >> q;
    char c;
    f(i, 0, q){
        cin >> c >> a;
        if(c == '+'){
            arr[a]++;
            if(arr[a] == 8){
            cnt8++;
            cnt6--;
        }else if(arr[a] == 6){
            cnt6++;
            cnt4--;
        }else if(arr[a] == 4){
            cnt4++;
            cnt2--;
        }else if(arr[a] == 2){
            cnt2++;
        }
        }else{
            arr[a]--;
            if(arr[a] == 7){
                cnt8--;
                cnt6++;
            }else if(arr[a] == 5){
                cnt6--;
                cnt4++;
            }else if(arr[a] == 3){
                cnt4--;
                cnt2++;
            }else if(arr[a] == 1){
                cnt2--;
            }
        }
        bool flag = false;
        if(cnt8 >= 1){
            flag = true;
        }else if(cnt6 >= 2){
            flag = true;
        }else if(cnt6 == 1){
            if(cnt4 >= 1 || cnt2 >= 1){
                flag = true;
            }
        }else if(cnt4 >= 2){
            flag = true;
        }else if(cnt4 == 1 && cnt2 >= 2){
            flag = true;
        }
        cout << ((flag)? "YES" : "NO") << "\n";
    }

}