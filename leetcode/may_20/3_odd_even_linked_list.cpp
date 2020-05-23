#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        auto odd = head;
        ListNode* even;
        if(odd->next != NULL){
            even = odd->next;
        }
        else{
            return head;
        }
        ListNode* tmp;
        while(even != NULL && even->next != NULL){
            tmp = even->next;
            even->next = tmp->next;
            even = even->next;
            tmp->next = odd->next;
            odd->next = tmp;
            odd = tmp;
        }
        return head;
    }


int main(){
    vector<int> arr({1,2,3,4,5});
    ListNode* head = new ListNode(arr[0]);
    auto node = head;
    for(int i = 1; i < arr.size(); i++){
        node->next = new ListNode(arr[i]);
        node = node->next;
    }
    head = oddEvenList(head);
}