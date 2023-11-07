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
void print_linklist(Node* head)
{
    cout<<endl;
   while (head!=NULL)
   {
     cout<<head->value<<" ";
     head=head->next;
   }
   cout<<endl;
}
void revers_linklist(Node* head)
{
     if (head==NULL)
     {
        return;
     }     
     revers_linklist(head->next);
     cout<<head->value<<" ";
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
}
int main(){
   Node *head=NULL;
   Node *tail=NULL;
   int v;
   while (true)
   {
     cin>>v;
     if (v==-1) break;
     insert_tail(head,tail,v); 
   }
  revers_linklist(head);
  print_linklist(head);

  return 0;
}