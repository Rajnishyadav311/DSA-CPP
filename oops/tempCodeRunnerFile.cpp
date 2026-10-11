#include<iostream>
using namespace std;
class calculator{
    public:
    int a;
    int b;
    void add(){
        cout << a+b;
    }
    void substract(){
        cout << a-b;
    }
};
int main (){
    calculator calci;
    calci.a=7;
    calci.b=8;
    calci.add();
    calci.substract();
}