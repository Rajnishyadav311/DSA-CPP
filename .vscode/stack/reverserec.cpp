#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>&st){
    stack<int>temp;
    while (st.size()>0)
    {
         cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    while (temp.size()>0)
    {
        st.push(temp.top());
        temp.pop();
    }
    
    
}
void displayrec(stack<int>&st){
    if(st.size()==0) return ;
    int x  = st.top();
   cout<< x << " ";
    st.pop();
    displayrec(st);
     
    st.push(x);
}
void display(stack<int>&st){
    if(st.size()==0) return ;
    int x  = st.top();
  
    st.pop();
    display(st);
    cout<< x << " ";
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << endl;

    displayrec(st);
    print(st);
}