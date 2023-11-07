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
void print_linklist(Node* head){
    while (head!=NULL)
    {
      cout<<head->value<<" ";
      head=head->next;
    } 
    cout<<endl;  
}
void delete_head(Node* &head){
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}
void delete_node(Node *head,int pos)
{
   Node* temp=head;
   for (int i=1; i<=pos-1; i++)
   {
      temp=temp->next;
   }
   Node* deletenode =temp->next;
   temp->next=temp->next->next;
   delete deletenode;
}
int main(){
   Node*head= new Node(5);
   Node*a= new Node(10);
   Node*b= new Node(20);
   Node*c= new Node(30);
   Node*d= new Node(40);
    head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   print_linklist(head);
   int pos;
   cout<<"enter position :";
   cin>>pos;
   if (size(head)<=pos)
   {
    cout<<"invalid"<<endl;
   }
   else if (pos==0)
   {
    delete_head(head);
   }  
   else
   {
   delete_node(head,pos);
   }
   print_linklist(head);
   
    return 0;
}