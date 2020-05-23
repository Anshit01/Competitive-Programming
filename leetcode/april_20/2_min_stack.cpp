#include <iostream>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

struct node{
    int val;
    node* next;
    int min;
    node(int x, node* n, int m) : val(x), next(n), min(m) {}
};

class MinStack {
public:
    /** initialize your data structure here. */
    node* head;

    MinStack() {
        head = NULL;
    }
    
    void push(int x) {
        int mn = x;
        if(head != NULL){
            mn = min(x, head->min);
        }
        node* n = new node(x, head, mn);
        head = n;
    }
    
    void pop() {
        head = head->next;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->min;
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}