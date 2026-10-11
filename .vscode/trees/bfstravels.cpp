#include<iostream>
using namespace std;
class node{
    public:
    node*left;
    node*right;
    int val ;
    node(int val){
        this->left = NULL;
        this->right = NULL;
        this->val = val;
    }
};
int level(node*root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void nthlevel(node*root,int curr , int levels){
    if(root==NULL) return ;
    if(curr==levels){
        cout << root->val << " ";
    };
    nthlevel(root->left,curr+1,levels);
    nthlevel(root->right,curr+1,levels);
}
void levelorder(node*root){
    int n = level(root);
    for(int i =1; i<=n ; i++){
        nthlevel(root,1,i);
        cout<< endl;
    }
}
int main(){
    node*a = new node(1);
    node*b = new node (2);
    node*c = new node(3);
    node*d = new node(4);
    node*e = new node(5);
    node*f = new node(6);
    node*g = new node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    levelorder(a);
}