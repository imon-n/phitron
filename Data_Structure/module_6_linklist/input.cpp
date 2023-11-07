#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int value;
   Node *next;

   Node(int value)
   {  
    this->value=value;
    this->next=NULL;
   }
};
void insert_at_tail(Node * &head,int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
      head=newNode;
      return;
    }
    Node* temp=head;
    while (temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=newNode;   
}
  void print_linklist(Node *head)
  {
    Node *temp=head;
    while (temp!=NULL){  
      cout<<temp->value<<" ";
      temp=temp->next;
    }  
  }
int main(){
    int v;
    Node *head=NULL;
   while (true)
   {
     cin>>v;
     if (v==-1)
     {
        break;     
     } 
     insert_at_tail(head,v);       
   }
   print_linklist(head);
   
    return 0;
}