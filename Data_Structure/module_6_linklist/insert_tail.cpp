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
void insert_at_tail(Node * &head,int v){
     Node * newNode = new Node(v);
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
    //temp ekon last node e ace--
    temp->next=newNode;
}
void print_linklist(Node *head){
    cout<<"your linklist :";
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
while (true)
{
  cout<<"option_1: inset at tail"<<endl;
  cout<<"option_2: print_limklist"<<endl;
  cout<<"option_5: print_limklist"<<endl;
  int op;
  cin>>op;
  if (op==1)
  {
    cout<<"please,enter your value :"<<endl;
    int v;
    cin>>v;
    insert_at_tail(head,v);
  }
  else if(op==2)
  {
    print_linklist(head); 
  }
  else if(op==3)
  {
    break; 
  }
  
 }
   
    return 0;
}
