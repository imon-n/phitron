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
void sort_linklist(Node* head)
{
    for (Node* i=head; i->next!=NULL; i=i->next)
    {
      for (Node* j=i->next; j!=NULL; j=j->next)
      {
        if (i->value > j->value)
        {
          swap(i->value , j->value);
        } 
      }
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

void print_linklistint(Node* head)
{
  Node* temp=head;
  for (int i=1; i<=size(head)/2; i++)
  {
    temp=temp->next;
  }
  cout<<temp->value<<" ";
  cout<<endl;
}

void print_linklistint22(Node* head)
{
  Node* temp=head;
   for (int i=1; i<=(size(head)/2-1); i++)
   {
    temp=temp->next;
   }
  cout<<temp->value<<" ";
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

  sort_linklist(head);
  if(size(head)%2 !=0) print_linklistint(head);     
  else
  {
    print_linklistint(head);
    print_linklistint22(head);
  }
    return 0;
}
