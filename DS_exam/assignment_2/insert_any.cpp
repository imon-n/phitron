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
    while (head!=NULL)
    {
      cout<<head->value<<" ";
      head=head->next;
    }   
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
   Node*head= NULL;  
   int position,value,test;
   cin>>test;
   
   
    return 0;
}