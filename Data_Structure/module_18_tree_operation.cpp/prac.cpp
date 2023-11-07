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
Node* input_binary()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root= new Node(val);

    queue<Node*>q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node* p= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1) myLeft=NULL;
        else myLeft= new Node(l);
        if(r==-1) myRight=NULL; 
        else myRight= new Node(r);

        p->left=myLeft;
        p->right=myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;  
}
void level_print(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p= q.front();
        q.pop();

        cout<<p->value<<" ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    } 
}
int main(){
   
   Node* root = input_binary();
   level_print(root);
    return 0;
}
// 10 20 60 30 50 70 -1 -1
// 40 -1 -1 -1 -1 80 -1 -1 -1