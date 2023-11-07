#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int value;
  Node *next;

  Node(int value)
  {  
    this->value = value;
    this->next = NULL;
  }
};
int main(){
   Node *head =new Node(11);
   Node *a =new Node(12);
   Node *b =new Node(13);
   Node *c =new Node(14);
   Node *d =new Node(15);

   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
  Node* temp= head;
   while (temp !=NULL)
   {
     cout<<temp->value<<endl;
     temp=temp->next;
   }
   cout<<"/////////"<<endl;
   while (head !=NULL)
   {
     cout<<head->value<<endl;
     head=head->next;
   }
   
  
//    cout<<head->value<<endl;
//    cout<<head->next->value<<endl;
//    cout<<head->next->next->value<<endl;
//    cout<<head->next->next->next->value<<endl;
//    cout<<head->next->next->next->next->value<<endl;
    return 0;
}

