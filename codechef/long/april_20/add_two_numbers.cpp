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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *cur1 = l1, *cur2 = l2;
    int carry = 0;
    int sum = cur1->val + cur2->val;
    if(sum > 9){
        carry = sum / 10;
        sum %= 10;
    }
    ListNode *ans = new ListNode(sum);
    ListNode *cur_ans = ans;
    cur1 = cur1->next;
    cur2 = cur2->next;
    while(cur1 != NULL or cur2 != NULL){
        if(cur1 == NULL){
            sum = cur2->val;
            cur2 = cur2->next;
        }
        else if(cur2 == NULL){
            sum = cur2->val;
            cur1 = cur1->next;
        }
        else{
            sum = cur1->val + cur2->val;
            cur1 = cur1->next;
            cur2 = cur2->next;
        }
        sum += carry;
        if(sum > 9){
            carry = sum / 10;
            sum %= 10;
        }
        cur_ans->next = new ListNode(sum);
        cur_ans = cur_ans->next;
    }
    if(carry != 0){
        cur_ans->next = new ListNode(carry);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}