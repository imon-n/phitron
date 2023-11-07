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

class my_stack
{
  public:
   Node* head = NULL;
   Node* tail = NULL;
   int sz=0;
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head==NULL)
        {
          head=newNode;
          tail=newNode;
          return;
        }
       tail->next=newNode;
       newNode->prev=tail;
       tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = tail;
        tail=tail->prev;  //minimum ekta node takbe main function er 
        if (tail==NULL)
        {
          head=NULL;   // jodi ekta node takhe tahole delete er por eta apply hbe
        }
        else
        {
          tail->next=NULL;
        }
        delete deleteNode;   
    }  
  int top()
  {
    return tail->value;
  }
   int size()
   {
    return sz;
   }
   bool empty()
   {
     if(sz==0)
     return true;
     else
     return false;
   }
};
int main(){
   my_stack st;
//    st.push(10);
//    st.push(30);
//    st.push(50);
//    cout<<st.top()<<" ";
//    st.pop();
//    cout<<st.top();

  int n;
  cin>>n;
  for (int i=0; i<n; i++)
  {
    int x;
    cin>>x;
    st.push(x);
  }

  while (st.empty() == false)  // !st.empty() = st.empty()==false
  {
    cout<<st.top()<<endl;
    st.pop();
  } 
   
  return 0;
}