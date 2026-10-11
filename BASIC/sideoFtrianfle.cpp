#include<iostream>
using namespace std;
int main (){
    int a;
    cout << "Enter the   one side of triangle : ";
    cin >> a;
    int b;
    cout << "Enter the second  side of triangle : ";
    cin >>  b;
    int c;
    cout << "Enter the third side of triangle :  ";
    cin >> c;
    if (a+b>c && b+c>a && c+a>b )
    {
        cout << "Valid triangle  : ";
    }
    else
    {
        cout << "not valid triangle : ";
    }
    return 0;

}