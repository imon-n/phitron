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
void delete_pos(Node* &head,int pos)
{
    Node* temp= head;
    for (int i=1; i<=pos-1; i++)
    {
      temp=temp->next;  
    }
    Node* delet_node=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete delet_node;
}
void delet_head(Node* &head,Node* &tail)
{
    if (head==NULL)
    {
        tail=NULL;
        return;
    }
    Node* deletNode = head;
    head=head->next;
    delete deletNode;
    head->prev=NULL;
}
void delet_tail(Node* &head, Node* &tail)
{
    if (tail==NULL)
    {
        head=NULL;
        return;
    }
    Node* deleteNode = tail;
    tail=tail->prev;
    delete deleteNode;
    tail->next=NULL;
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
   if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
   else if (pos==size(head)-1)
   {
     delet_tail(head,tail);
   }
  else if (pos==0)
   {
     delet_head(head,tail);
   }  
  else{
  delete_pos(head,pos);
  }
  print_normal(head);
  print_rverse(tail);
  
   
    return 0;
}