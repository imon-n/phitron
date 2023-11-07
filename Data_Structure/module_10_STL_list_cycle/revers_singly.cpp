#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int value;
   Node *next;

   Node(int value)
   {  
    this->value=value;
    this->next=NULL;
   }
};
void print_val(Node* head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value<< " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void reverse(Node* &head,Node* cur)
{
    if (cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main(){
   Node* head=new Node(10);
   Node *a = new Node(20);
   Node *b = new Node(30);
   Node *c = new Node(40);

   head->next=a;
   a->next=b;
   b->next=c;
   reverse(head,head);
   print_val(head);
   
    return 0;
}