#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int value;
   Node *left;
   Node *right;

   Node(int value){  
     this->value=value;
     this->left=NULL;
     this->right=NULL;
   }
};
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {        // 01. ber kore ana
        Node* f= q.front();
        q.pop();

        //2. jabotiyo sokol kaj
        cout<<f->value<<" ";

        //3.tar children gulu kr rakha
        if(f->left !=NULL)   //  if(f->left)------->>ebabeu lika jay ,,,karon false=NULL er ,,,so   NULL != true  
          q.push(f->left);
        if(f->right !=NULL)  //  if(f->right)------->>ebabeu lika jay 
            q.push(f->right);
    }
}
void preoder(Node* root)
{
    if (root==NULL)  return;
    cout<<root->value<<" ";
    preoder(root->left);
    preoder(root->right);
}
  
int main(){
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection
    root->left= a;
   root->right= b;
   a->left= c;
   a->right= h;
   c->right=e;
   b->right=d;
   d->right=g;  
   d->left=f;
   h->right=i;
    level_order(root);

    
    return 0;
}