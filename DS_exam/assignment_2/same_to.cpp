#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int val;
   Node *next;
   Node(int val)
   {
     this->val=val;
     this->next=NULL;
   }
};
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
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode= new Node(val);
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

  Node *head1=NULL;
  Node *tail1=NULL;
while(true)
{
  int val1;
  cin>>val1;
  if(val1 ==-1)break;
  insert_tail(head1,tail1,val1);
}

  Node *head2=NULL;
  Node *tail2=NULL;
   while(true)
   {
    int val2;
    cin>>val2;
    if(val2 ==-1) break;
    insert_tail(head2,tail2,val2);
   }


   int g=0;
   if(size(head1) != size(head2))
   {
     g=1;
   }
    int flage=0;
    while (head1!=NULL && head2!=NULL)
   {
    if(head1->val != head2->val)
    {
        flage=1;
        break;
      }      
    head1=head1->next;
    head2=head2->next;
  } 

  if (g==1 || flage==1)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;
}
