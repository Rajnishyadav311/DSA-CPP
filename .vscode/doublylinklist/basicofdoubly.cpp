#include<iostream>
using namespace std;
class node{
    public:
    int val ;
    node*next;
    node*pre;
    node(int val){
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void display(node*head){
    node*temp = head;
    while (temp)
    {
        cout<< temp->val << " ";
        temp  = temp->next;
    }
    
}
int main(){
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d= new node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    b->pre = a;
    c->pre = b;
    d->pre = c;
    a->pre = NULL;
    display(a);
}


