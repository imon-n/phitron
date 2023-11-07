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
void print_linklist(Node* head){
    while (head!=NULL)
    {
        cout<<head->value<<" ";
        head=head->next;
    }   
}
int main(){
   Node*head= new Node(5);
   Node*a= new Node(10);
   Node*b= new Node(20);
   Node*c= new Node(30);
   Node*d= new Node(40);
   Node*e= new Node(50);
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
   print_linklist(head);
   
    return 0;
}