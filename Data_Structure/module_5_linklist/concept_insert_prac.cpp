#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int value;
   Node *next;
   Node(int value){  
     this->value=value;
     this->next=NULL;
   }
};

void insert_head(Node* &head,int val)
{
    Node* newNode = new Node(val);    
    if (head==NULL)
    {
       head = newNode;
       return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_last(Node* head,int val)
{
    Node *newnode=new Node(val);
    Node *temp=head;
    while (temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;   
}
void print_link_list(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
       cout<<temp->value<<" ";
       temp=temp->next;
    }  
    cout<<endl; 
}
int main(){
    Node* head =new Node(5);
   Node *a=new Node(10);
   Node *b=new Node(20);
   Node *c=new Node(30);
   Node *d=new Node(40);
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=NULL;
   print_link_list(head);
   insert_head(head,67);
    print_link_list(head);
    insert_last(head,444444);
    print_link_list(head);
    return 0;
}
