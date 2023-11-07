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
void printlink(Node* head)
{
    cout<<"L -> ";
    while (head != NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }  
    cout<<endl; 
}
void revrse(Node* tail)
{
    cout<<"R -> ";
    while (tail != NULL)
    {
        cout<<tail->value<<" ";
        tail=tail->prev;
    }  
    cout<<endl; 
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
void insert_tail(Node* &head,Node* &tail, int v)
{
    Node* newNode = new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
void insert_head(Node* &head,Node* &tail, int v)
{
    Node* newNode = new Node(v);
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}
void insert_any(Node* &head,Node* &tail,int pos, int v)
{
    Node* newNode = new Node(v);
    Node* temp=head;
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    for (int i=1; i<=pos-1; i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=temp;   
}
int main(){
   Node* head=NULL;
   Node* tail=NULL;

    int v,pos,test;
    cin>>test;
   while (test--)
   {
    cin>>pos>>v;
     if (pos>size(head))
     {
        cout<<"Invalid"<<endl;
     }
     else if (pos==size(head))
     {
        insert_tail(head,tail,v); 
        printlink(head);
        revrse(tail);
     }
     else if (pos==0)
     {
        insert_head(head,tail,v);  
        printlink(head);
        revrse(tail);
     }
     else
     {
        insert_any(head,tail,pos,v);
        printlink(head);
        revrse(tail);  
     }      
   }
   
    return 0;
}