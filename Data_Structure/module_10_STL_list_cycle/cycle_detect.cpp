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
int main(){
   Node* head=new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);

   head->next=a;
   a->next=b;
   b->next=a;  // due to cycling 
//    b->next=NULL;

   Node* slow= head;
   Node* fast= head;

   bool flag = false;
   while (fast!=NULL && fast->next!=NULL)
   {
     slow=slow->next;
     fast=fast->next->next;
     if (slow==fast)
     {
        flag=true;
        break;
     }    
   }
   if(flag == true) cout<< "Cycle Detected" << endl;
   else cout << "No Cycle" << endl;
   
   return 0;
}