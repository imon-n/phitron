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
int getSize(Node *head){
    int cnt=0;
    Node *temp=head;
    while (temp!=NULL)
    {
      temp=temp->next;
      cnt++;
    }
    return cnt;
}
void insert_at_tail(Node *&head,int val)
{
    Node* newNode= new Node(val);
    if (head==NULL)
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

void insert_head(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if (head==NULL)
    {
      head = newNode;
      return;
    }
    Node *temp=head;
    head=newNode;
    newNode->next= temp; 
}

void deleteAtHead(Node *&head){
  Node *temp=head;
  
  Node *temp2=temp->next;
  head=temp2;
  delete temp;
}
void deleteAtTail(Node *&head){
   Node*temp= head;
   while (temp->next->next !=NULL)
   {
     temp=temp->next;
   }
   temp->next=NULL;
}
void deleteAtanyPositon(Node* &head,int index)
{
  Node* temp=head;
  int pos=1;
  while (pos!=index)
  {
    temp=temp->next;
    pos++;
  }
  Node *toDelete = temp->next;
  temp->next = temp->next->next;
  delete toDelete;  
}
void print_link_list(Node *head){
   Node *temp=head;
   while (temp!=NULL)
   {
     cout<<temp->value<<" ";
     temp=temp->next;
   }
   cout<<endl;  
}  

int main(){   
   Node *head=NULL;
  
   insert_at_tail(head,20);
   insert_at_tail(head,30);
   insert_head(head,-20);
   
   insert_at_tail(head,50);
   insert_head(head,70); 
    cout<<"size: "<<getSize(head)<<endl;  
   print_link_list(head);
   deleteAtHead(head);
   print_link_list(head); 
   cout<<"============="<<endl;
   deleteAtTail(head);
   print_link_list(head);
   deleteAtanyPositon(head,1);

    print_link_list(head);
  
    return 0;
}
