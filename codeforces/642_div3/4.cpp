#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

struct struc{
    int len, start, end;
    struc(int s, int e) : start(s), end(e), len(e-s+1) {}

    bool operator<(const struc& other) const{
        if(this->len > other.len){
            return true;
        }else if(this->len < other.len){
            return false;
        }else{
            if(this->start < other.start){
                return true;
            }
            else{
                return false;
            }
        }
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        set<struc> st;
        vector<int> arr(n+1, 0);
        int i = 2;
        if(n == 1){
            arr[1] = 1;
        }else if(n == 2){
            arr[1] = 1;
            arr[2] = 2;
        }else{
            int start = 1, end = n;
            int mid = (start+end)/2;
            if(n % 2 == 0){
                arr[n/2] = 1;
                st.insert(struc(mid+1, end));
                st.insert(struc(start, mid-1));
            }else{
                mid = (n+1)/2;
                arr[mid] = 1;
                st.insert(struc(start, mid-1));
                st.insert(struc(mid+1, end));
            }
            struc first = *st.begin();
            st.erase(first);
            while(first.end - first.start != 0){
                start = first.start;
                end = first.end;
                mid = (end+start)/2;
                if((end-start+1)%2 == 0){
                    st.insert(struc(mid+1, end));
                    if(mid != start){
                        st.insert(struc(start, mid-1));
                    }
                }else{
                    st.insert(struc(start, mid-1));
                    st.insert(struc(mid+1, end));
                }
                arr[mid] = i;
                i++;

                if(st.empty()){
                    break;
                }
                first = *st.begin();
                st.erase(first);
            }
        }
        f(j, 1, n+1){
            if(arr[j] == 0){
                arr[j] = i;
                i++;
            }
        }
        f(i, 1, n+1){
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
}