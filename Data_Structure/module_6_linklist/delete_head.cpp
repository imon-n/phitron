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
      cout<<endl<<"inserted at head"<<endl<<endl;
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
    cout<<endl;
    cout<<"your linklist :";
    Node *temp=head;
    while (temp!=NULL)
    {  
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
void insert_any_pos(Node* head,int pos,int v){
    Node *newNode =new Node(v);
    Node* temp=head;
    for (int i=1; i<=pos-1; i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<endl<<endl<<"inserted any position"<<endl<<endl;
}
void delet_pos(Node* head,int pos){
   Node* temp=head;
   for (int i=0; i<=pos-1; i++)
   {
       temp=temp->next;
   }
   Node* deletNode=temp->next;
   temp->next=temp->next->next;
   delete deletNode;  
   cout<<endl<<"deleted the position "<<pos<<endl<<endl;
}
void insert_head(Node*&head,int v){
     Node *newNOde= new Node(v);
     newNOde->next=head;
     head=newNOde;
     cout<<"inserted at head"<<endl;
}
void delete_head(Node* &head){
    Node* deleteNode = head;
    head=head->next;
    delete deleteNode;
    cout<<endl<<"deleted the head "<<endl<<endl;
}
int main(){
   Node *head=NULL;
while (true)
{
    cout<<"option_1: inset at tail"<<endl;
    cout<<"option_2: print_limklist"<<endl;
    cout<<"option_3: insert_at_any"<<endl;
    cout<<"option_4: insert_head"<<endl;
    cout<<"option_5: delete_pos"<<endl;
    cout<<"option_6: delete_head"<<endl;
    cout<<"option_7: terminate"<<endl;
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
  else if (op==3)
  {
    int pos,v;
    cout<<"enter position :";
    cin>>pos;
    cout<<"enter your value :";
    cin>>v;
    if (pos==0)
    {
        insert_head(head,v);
    }
    else
    insert_any_pos(head,pos,v);
  }
  else if (op==4)
  {
    int v;
    cout<<"enter your value of head :";
    cin>>v;
    insert_head(head,v);
  }
  else if (op==5)
  {
    int pos;
    cout<<"enter position :";
    cin>>pos;
    if (pos==0)
    {
        delete_head(head);
    }
    else{
    delet_pos(head,pos);
    }
  } 
  else if (op==6)
  {
    delete_head(head);
  }
  
  else if(op==7)
  {
    break; 
  } 
 }  
    return 0;
}
