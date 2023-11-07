#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int value;
    Node* next;
    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};
void insert_head(Node* &head,Node* &tail, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail=newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void print_headvalue(Node* head)
{
    if (head == NULL) {
        return;
    } 
      cout << head->value << " ";
}
void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_tail_value(Node* tail) 
{
    if (tail == NULL) {
        return;
    }
    cout << tail->value << endl;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int vl, pos, test;
    cin >> test;
    while (test--) {
        cin >> pos;
        cin >> vl;
        if (pos == 0) 
        {
            insert_head(head,tail,vl);
        }
        else if (pos == 1) 
        {
            insert_tail(head, tail, vl);
        }
        print_headvalue(head);
        print_tail_value(tail);
    }
    return 0;
}
