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
void insert_pos(Node* head,int pos,int val)
{
    Node * newNode = new Node(val);
    Node* temp = head;
    for (int i=1; i<=pos-1; i++)
    {
      temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void print_linklist(Node* head){
    while (head!=NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }   
}
int size(Node* head)
{
    int cnt=0;
  while (head!=NULL)
  {
    cnt++;
    head=head->next;
  }
  return cnt;
}
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
   if (head==NULL)
   {
     head=newNode;
     tail=newNode;
     return;
   }
   tail->next=newNode;
   tail=newNode;
   cout<<endl<<"tail done"<<endl;  
}
void insert_head(Node* &head,int val)
{
  Node* newNode = new Node(val);
  newNode->next=head;
  head=newNode;
}
int main(){
   Node*head= new Node(5);
   Node*a= new Node(10);
   Node*b= new Node(20);
   Node*c= new Node(30);
   Node*d= new Node(40);
   Node* tail= d;
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
  // d->next=tail;
  
   int position,value;
   cin>>position>>value;
   if (position>size(head))
   {
    cout<<"invalid index"<<endl;
   }
   else if (position==0)
   {
     insert_head(head,value);
   }  
   else if (position==size(head))
   {
    insert_tail(head,tail,value);
   }  
   else
   {
    insert_pos(head,position,value);
   } 
   print_linklist(head);
   
    return 0;
}