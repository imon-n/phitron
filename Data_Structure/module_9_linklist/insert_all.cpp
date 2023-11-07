#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int value;
   Node *next;
   Node *prev;

   Node(int value){  
     this->value=value;
     this->next=NULL;
     this->prev=NULL;
   }
};
void print_normal(Node* head)
{
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_rverse(Node* tail)
{
    Node* temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_position(Node* head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* temp= head;
    for (int i=1; i<=pos-1; i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=temp;
}
void insert_tail(Node* &head,Node* &tail,int val)
{
   Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;  // ebabeu lika jay(tail=newNode;)
}
void insert_head(Node* &head,Node* &tail,int val)
{
   Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;   // ebabeu lika jay(head=head->prev;)  
}
int main(){
   Node* head= new Node(10);
   Node* a= new Node(20);
   Node* b= new Node(30);
   Node* c= new Node(40);
   Node* tail= c;
   //connection
   head->next=a;
   a->prev=head;
   a->next=b;
   b->prev=a;
   b->next=c;
   c->prev=b;

   int pos;
   cin>>pos;

   if (pos>size(head))
   {
    cout<<"invalid"<<endl;
   }
   else if (pos==size(head))
   {
     insert_tail(head,tail,1000);
   }  
   else if (pos==0)
   {
     insert_head(head,tail,1000);
   }  
   else
   {
     insert_position(head,pos,100);
   }
  print_normal(head);
  print_rverse(tail);
  
   
    return 0;
}