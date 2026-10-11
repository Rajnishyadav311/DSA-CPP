#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        this->data=val;
        this->next = NULL;
    }
};
class Linkedlist{
    public:
    node*head;
    node*tail;
    int start;
    Linkedlist(){
        head = tail = NULL;
        start = 0;
    }
    void insertAtTail(int val){
        node*temp = new node(val);
       if(head==0) tail = head = temp;
       else{
            tail->next = temp;
            tail = temp;
       }
       start++;
    }
    void insertAtHead(int val){
        node*temp = new node (val);
        if(head==0) head = tail = temp;
        else{
            temp->next=head;
            head = temp;
        }
        start++;
    }
    void inserAtidx(int idx , int val){
        if(idx<0 || idx>start) cout << "Invalid index " << endl ;
        else if(idx == 0) insertAtHead(val);
        else if(idx == start) insertAtTail(val);
        else{
            node*t = new node(val);
            node*temp = head;
            for (int  i = 0; i <idx-1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            start++;
        }
    }
    void deleteathead(){
        if(start==0) cout << "list is empty ";
        else {
            head=head->next;
            start--;
        }
    }
    void display(){
        node*temp=head;
        while (temp!=NULL)
        {
            cout<< temp->data << " ";
            temp = temp->next;
        }  
    }
};
int main(){
    Linkedlist  ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtHead(60);
    ll.inserAtidx(1,60);
    ll.deleteathead();
    ll.display();
}