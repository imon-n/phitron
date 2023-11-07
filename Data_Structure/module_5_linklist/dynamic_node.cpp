#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int value;
   Node *next;

   Node(int value)
   {  
     this->value=value;
     this->next=NULL;
   }
};
int main(){
   //Node head(10);
   Node *head =new Node(10);
   Node *a =new Node(50);
   
   head->next=a;

   cout<<head->value<<endl;
   cout<<a->value<<endl;

   cout<<head->next->value<<endl;//====>>eta use korbo
   cout<<"1 star: "<<(*head).next->value<<endl;
   cout<<"2 star: "<<(*(*head).next).value<<endl;
   
   return 0;
}