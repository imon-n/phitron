#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int val;
   Node* next;
 Node(int val)
 {
   this->val=val;
   this->next=NULL;
 }
};
int main(){
   Node* a=new Node(10);
   Node* b=new Node(20);
   Node* c=new Node(30);
   Node* d=new Node(40);
   a->next=b;
   b->next=c;
   c->next=d;
   while (a!=NULL)
   {
     cout<<a->val<<" ";
     a=a->next;
   }
     
    return 0;
}