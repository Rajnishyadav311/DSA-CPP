#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    // cout<< st.size()<<" ";
    // cout << st.size();
    // cout << endl;

    // cout << st.top();
    // cout << endl ;
    // while(st.size()>0){
    //     cout << st.top() << " ";
    //     st.pop();
    // }
 
    // print and store the stack in the linked lists 
    stack<int>temp;
    while (st.size()>0)
    {
        cout << st.top() << " ";
        int x = st.top();
        st.pop();
        temp.push(x);

    }
     while(temp.size()>0){
        cout << temp.top() << " ";
      temp.pop();
     }
}