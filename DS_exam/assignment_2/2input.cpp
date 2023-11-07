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
void insert_tail11(Node* &head11,int v1)
{
    Node* newNode1= new Node(v1);
    Node* temp1=head11;
    if (temp1==NULL)
    {
      head11=newNode1;
      return;
    }
    while (temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=newNode1;        
}
int size1(Node* head11)
{
   int cnt1=0;
   while (head11 !=NULL)
   {
    cnt1++;
     head11 = head11->next;
   }
   return cnt1;
}
int main(){
   Node*head1=NULL;
    int v1;
    while (true)
    {
        cin>>v1;
        if (v1==-1)
        {
          break;
        }
        insert_tail11(head1,v1);
    }

    Node*head2=NULL;
    int v2;
    while (true)
    {
        cin>>v2;
        if (v2==-1)
        {
          break;
        }
        insert_tail11(head2,v2);
    }

    int g=0;
    if(size1(head1) != size1(head2))
    {
      g=1;
    }   

  int flage=0;
  while (head1!=NULL && head2!=NULL)
  {
    if(head1->value != head2->value)
    {
      flage=1;
      break;
    }      
    head1=head1->next;
    head2=head2->next;
  } 

  if (g==1 || flage==1) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
    
  return 0;
}