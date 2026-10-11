#include<iostream>
using namespace std;
#include<stack>
void print(stack<int>st){
    while (st.size()>0)
    {
        cout << st.top() << " ";
        st.pop();
    }
    
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int>gt;
    stack<int>rt;
    while (st.size()>0)
    {
        gt.push(st.top());
        st.pop();
    }
    while (gt.size()>0)
    {
        rt.push(gt.top());
        gt.pop();
    }
    print(rt);
}