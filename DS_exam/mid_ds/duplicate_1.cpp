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
void printlink(Node* head)
{
    while (head != NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }  
    cout<<endl; 
}
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
void to_sort(Node* head)
{
    for (Node* i=head; i->next !=NULL ; i=i->next)
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
int main(){
   Node* head=NULL;
   Node* tail=NULL;
   
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
   to_sort(head);
   Node* temp=head;
   while (temp->next!=NULL)
   {
     if (temp->value == temp->next->value)
     {
       temp->next=temp->next->next;
     }
     else if (temp->value != temp->next->value)
     {
        temp=temp->next;
     }     
   }
   printlink(head);

   
    return 0;
}