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
void insert_at_tail(Node *&head,int val){
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
void insert_head(Node* &head,int val){
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
void insert_any_pos(Node* &head,int index,int val){

   Node* newNode= new Node(val);
   if (index==1)
   {
    insert_head(head,val);
    return;
   }
   else if(index==getSize(head)){
    insert_at_tail(head,val);
    return;
   }  
  Node* temp=head;
  int pos=1;
  while (pos!=index)
  {
    temp=temp->next;
    pos++;
  }
  Node* temp2=temp->next;
  temp->next=newNode;
  newNode->next=temp2;
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

   insert_at_tail(head,10);
   insert_at_tail(head,20);
   insert_at_tail(head,30);
   insert_head(head,60);
   insert_at_tail(head,40);
   insert_at_tail(head,50);

   insert_head(head,70);
   print_link_list(head);   
  

   insert_any_pos(head,1,809);
   insert_any_pos(head,1,809);

   cout<<"size: "<<getSize(head)<<endl;
   insert_any_pos(head,9,80);
    cout<<"size: "<<getSize(head)<<endl;
   insert_any_pos(head,10,800);
   insert_any_pos(head,2,999);   
   print_link_list(head); 
  
    return 0;
}
