#include<iostream>
using namespace std;
// void gun (){
//     cout << "Hello Cw " <<  " " ;
// }
// void fun(){
//     cout << "Hello Pw : " << endl;
//     gun();
// }  
    void fun(int n){
        if(n==0) return;
        cout << "Hello Pw : " << endl;
        fun(n-1);
    }
int main (){
    fun(3);
}