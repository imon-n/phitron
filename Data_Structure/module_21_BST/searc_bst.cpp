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
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        cout << f->value << " ";

        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
 bool searce(Node* root, int x)
 {
    if(root == NULL) return false;
    if(root->value == x) return true;
    if(x < root->value)
    {
        return searce(root->left , x);

        // bool l = searce(root->left , x);
        // if(l== true) return true;
        // else return false;
    }
    else
    {
        return searce(root->right,x);
    }
 }
int main(){
    Node* root = input_tree();
    //level_order(root);
   
   if(searce(root,6))
   {
    cout<<"YES, found";
   }
   else{
    cout<<"Not found";
   }
    return 0;
}
// 10 5 15 2 6 12 16 -1 
// 3 -1 -1 -1 -1 -1 -1
// -1 -1