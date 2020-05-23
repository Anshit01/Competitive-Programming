#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

class MyLinkedList {
private:
    struct Node{
        int val;
        Node* next;
        Node(int n){
            val = n;
            next = NULL;
        }
        Node(int n, Node* ptr){
            val = n;
            next = ptr;
        }
    };
    Node* head;
    Node* tail;
    int length;

public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        length = 0;
        head = NULL;
        tail = NULL;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index < 0 || index >= length){
            return -1;
        }
        int i = 0;
        Node* node = head;
        while(i < index){
            i++;
            node = node->next;
        }
        return node->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* node = new Node(val, head);
        head = node;
        length++;
        if(length == 1){
            tail = head;
        }
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* node = new Node(val);
        if(length == 0){
            addAtHead(val);
        }else{
            tail->next = node;
            tail = node;
            length++;
        }
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index < 0 || index > length){
            return;
        }
        if(length == 0){
            addAtHead(val);
            return;
        }
        Node* node;
        if(index == length){
            tail->next = new Node(val);
            tail = tail->next;
        }
        index--;
        if(index == -1){
            node = new Node(val, head);
            head = node;
        }else if(index != length-1){
            int i = 0;
            node = head;
            while(i < index){
                i++;
                node = node->next;
            }
            Node* newNode = new Node(val, node->next);
            node->next = newNode;
        }
        length++;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index < 0 || index >= length){
            return;
        }
        if(index == 0){
            head = head->next;
        }else{
            Node* node = head;
            int i = 0;
            index--;
            while(i < index){
                i++;
                node = node->next;
            }
            node->next = node->next->next;
            if(node->next == NULL){
                tail = node;
            }
        }
        length--;
    }
};

int main(){
    MyLinkedList l = MyLinkedList();
    // l.addAtHead(7);
    // l.addAtHead(2);
    // l.addAtHead(1);
    // l.addAtIndex(3, 0);
    // l.deleteAtIndex(2);
    // l.addAtHead(6);
    // l.addAtTail(4);
    // cout << l.get(4) << endl;
    // l.addAtHead(4);
    // l.addAtIndex(5, 0);
    // l.addAtHead(6);
    l.addAtIndex(0, 10);
    l.addAtIndex(0, 20);
    l.addAtIndex(1, 30);
    cout << l.get(0) << endl;
}