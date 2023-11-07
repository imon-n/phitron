#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int value;
   Node *next;

   Node(int value){  
     this->value=value;
     this->next=NULL;
   }
};
void insert_tail(Node* &head,Node* &tail,int v)
{
    Node* newNode=new Node(v);
    Node* temp = head;
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;  
}
void printlink(Node* head)
{
    while (head != NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }  
    cout<<endl; 
}
void revers_list(Node* &head,Node* cur)
{
    if (cur->next ==NULL)
    {
        head=cur;
        return;
    }   
    revers_list(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main(){
   Node* head=NULL;
   Node* tail=NULL;
   Node* head1=NULL;
   Node* tail1=NULL;
   
   int v;
   while (true)
   {
    cin>>v;
     if (v==-1)
     {
        break;
     }
     insert_tail(head,tail,v);
     insert_tail(head1,tail1,v);   
   }  
   revers_list(head,head);

   Node* temp1=head1;
   Node* temp=head;
   
   int flag=0;
   while (temp1!=NULL)
   {
     if (temp1->value != temp->value)
     {
        flag=1;
        break;
     }   
     temp1=temp1->next;
     temp=temp->next;
   }
   if (flag==0)
   {
     cout<<"YES";
   }
   else
   {
    cout<<"NO";
   }  

}