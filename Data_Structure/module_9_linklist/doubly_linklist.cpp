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
int main(){
   Node* head= new Node(5);
   Node* a= new Node(10);
   Node* b= new Node(20);
   Node* tail= b;
   //connection
   head->next=a;
   a->prev=head;
   a->next=b;
   b->prev=a;
  print_normal(head);
  print_rverse(tail);
   
    return 0;
}