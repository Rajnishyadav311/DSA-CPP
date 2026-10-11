#include<iostream>
#include<climits>
using namespace std;
class node{
    public:
    node*left;
    node*right;
    int val;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(node*root){
    if(root==NULL) return ;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
int sum(node*root){
    if(root==NULL) return 0;
    return root->val  + sum(root->left) + sum(root->right);
}
int size(node*root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int level(node*root){
    if(root==NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
int main(){
    node*a = new node(1);
    node*b = new node(2);
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
    display(a);
    cout << endl;
    sum(a);
    cout<<sum(a);
    cout << endl;
    cout<<size(a);
    cout << endl;
    cout << level(a);
}