#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1) myLeft = NULL;
        else  myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int mx= INT_MIN;
int  count_max_node(Node* root)
{
    if(root==NULL) return 0;

    if(root->left==NULL && root->right ==NULL)
    {
        if(mx < root->val)
        mx=root->val;
    }
    count_max_node(root->left);
    count_max_node(root->right);
    return mx;
}
int mn = INT_MAX;
int  count_min_node(Node* root)
{
    if(root==NULL) return 0;

    if(root->left==NULL && root->right ==NULL)
    {
        if(mn>root->val)
        mn=root->val;
    }      
    count_min_node(root->left);
    count_min_node(root->right);
    return mn;
}
int main()
{ 
    Node *rouot = input_tree();
    cout<<count_max_node(rouot)<<" ";
    cout<<count_min_node(rouot);
    return 0;
}
