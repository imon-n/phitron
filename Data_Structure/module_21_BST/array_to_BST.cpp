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
Node* convert(int a[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid =(l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftRoot = convert(a,n,l,mid-1);
    Node* rightRoot = convert(a,n,mid+1,r);
    root->left= leftRoot;
    root->right = rightRoot;
    return root;
}
int main(){
   int n;
   cin>>n;
   int a[n];
   for (int i=0; i<n; i++)
   {
       cin >> a[i];
   }

   sort(a,a+n);   // sort kora lagbe
    Node* root= convert(a,n,0,n-1);
    level_order(root);
   
    return 0;
}
// 6
// 2 5 8 12 15 18