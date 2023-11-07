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
int mx = INT_MIN;
int mn = INT_MAX;
int max_linklistint(Node* head)
{
   for (Node* i=head; i!=NULL; i=i->next)
   {
      if (i->value > mx)
      {
        mx=i->value;
      }       
   }
   return mx;
}
int min_linklist(Node* head)
{
    for (Node* i=head; i!=NULL; i=i->next)
    {
        if (i->value < mn)
        {
           mn=i->value;
        }       
    }
    return mn;
}
void insert_tail(Node* &head,Node* &tail,int v)
{
    Node* newNode= new Node(v);
    Node* temp=head;
   if (temp==NULL)
   {
     head=newNode;
     tail=newNode;
     return;
   }
   tail->next=newNode;
   tail=newNode;  
}
int main(){
   Node* head=NULL;
   Node*tail=NULL;
   int v;
   while (true)
   {
    cin>>v;
    if (v==-1)
    {
        break;
    }
    insert_tail(head,tail,v);
   }  
    int maxValue = max_linklistint(head);
    cout <<maxValue <<" ";

  int minvale= min_linklist(head);
  cout<<minvale;
   
    return 0;
}
