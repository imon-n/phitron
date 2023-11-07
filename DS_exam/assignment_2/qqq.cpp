#include <iostream>
using namespace std;
class Node {
public:
    int value;
    Node* next;
    Node(int value) 
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_head(Node* &head, int v) 
{
    Node* newNode = new Node(v);
    if (head == NULL) 
    {
        head = newNode;
        //tail = newNode;
    } 
    else 
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_tail(Node* &head, Node* &tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) 
    {
        head = newNode;
        tail = newNode;
    } 
    else 
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_head_value(Node* head) {
    if (head == NULL) {
        cout << "Empty List ";
    } else {
        cout << head->value << " ";
    }
}

void print_tail_value(Node* tail) {
    if (tail == NULL) {
        cout << "Empty List" << endl;
    } else {
        cout << tail->value << endl;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q, X, V;
    cin >> Q;

    while (Q--) {
        cin >> X >> V;

        if (X == 0) {
            insert_head(head,V);
        } 
        else if (X == 1) 
        {
            insert_tail(head, tail, V);
        }

        print_head_value(head);
        print_tail_value(tail);
    }
    return 0;
}
