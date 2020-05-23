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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode *cur1 = l1, *cur2 = l2, *sorted, *cur_sorted;
    if(l1 == NULL){
        return l2;
    }
    if(l2 ==NULL){
        return l1;
    }
    if(cur1->val < cur2->val){
        sorted = cur1;
        cur1 = cur1->next;
    }
    else{
        sorted = cur2;
        cur2 = cur2->next;
    }
    cur_sorted = sorted;
    while(cur1 != NULL and cur2 != NULL){
        if(cur1->val < cur2->val){
            cur_sorted->next = cur1;
            cur1 = cur1->next;
        }
        else{
            cur_sorted->next = cur2;
            cur2 = cur2->next;
        }
        cur_sorted = cur_sorted->next;
    }
    if(cur1 != NULL) cur_sorted->next = cur1;
    if(cur2 != NULL) cur_sorted->next = cur2;
    return sorted;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}