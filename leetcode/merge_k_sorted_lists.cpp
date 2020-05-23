#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
ListNode* mergeKLists(vector<ListNode*>& lists) {
    int arr[1000000];
    int len = 0;
    for(auto lst: lists){
        while(lst != NULL){
            arr[len++] = lst->val;
            lst  = lst->next;
        }
    }
    if(len == 0) return NULL;
    sort(arr, arr+len);
    ListNode *lst = new ListNode(arr[0]);
    ListNode *lst_ptr = lst;
    for(int i = 1; i < len; i++){
        lst_ptr->next = new ListNode(arr[i]);
        lst_ptr = lst_ptr->next;
    }
    return lst;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}