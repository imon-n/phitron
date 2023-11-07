#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int val;
   Node* next;
 Node(int val)
 {
   this->val=val;
   this->next=NULL;
 }
};
void delete_at_tail(Node* &head)
{
    Node *temp=head;
    while (temp->next->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=NULL;
}
void delet_head(Node* &head){
   Node* temp=head;
   Node* temp2=temp->next;
   head=temp2;
   delete temp;
}
void delete_any_pos(Node* &head,int pos){
     Node* temp=head;
     int index=1;
     while (index!=pos)
     {
       index++;
       temp=temp->next;
     }
     Node *temp2=temp->next;
      temp->next=temp->next->next;
      delete temp2;

}
   void print_linklist(Node *head){
      Node *temp=head;
      while (temp!=NULL)
      {
        cout<<temp->val<<" ";
        temp=temp->next;
      } 
      cout<<endl;     
   }
int main(){
    Node *head=NULL;
    Node *a= new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);
    Node *d= new Node(40);
    Node *e= new Node(50);
    head = a;
    a->next = b;
    b->next = c;
    c->next=d;
    d->next=e;
   //  print_linklist(head);
   //  delete_at_tail(head);
   //  print_linklist(head);

   //  delet_head(head);
     print_linklist(head);
     delete_any_pos(head,2);
      print_linklist(head);
    return 0;
}