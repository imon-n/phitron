#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string address;
    Node* next;
    Node* prev;

    Node(string adrs) {
        this->address = adrs;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_list(Node* current) {
    if (current == NULL) {
        cout << "Not Available" << endl;
    } else {
        cout << current->address << endl;
    }
}

void insert_address(Node*& head, Node*& tail,string adrs) 
{
    Node* newNode = new Node(adrs);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    } 
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
     while (true) {
        string st;
        cin>>st;
        if(st == "end")
        {
            break;
        }
        insert_address(head,tail,st);
     }

    int test;
    cin>>test;
    string adrs;
    while (test--)
    {
        cin >> adrs;
        insert_address(head, tail, adrs);
    }

    Node* temp =head;
    Node* current =head;
    while (temp != NULL)
    {
            if (adrs == "vist") 
            {
                if (temp->address=="phitron")
                {
                    head=temp;
                }
                
            }
            print_list(current);


            if (adrs == "next") 
            {
                current = current->next;
            }
            print_list(current);
        
            if (adrs == "prev")
            {
                current = current->prev;
            }
            print_list(current);       
    }   
}
