#include<iostream>
using namespace std;
int main (){
    int a;
    cout << "Enter the age of Ram : ";
    cin >> a;
    int b ;
    cout << "Enter the age of Shyam : ";
    cin >> b;
    int c;
    cout << "Enter the age ajay : ";
    cin >> c;
    if (a>b)
    {
        if (a>c)
        {
            cout << "The Ram age is greatest of all : ";
        }
        else{
            cout << "The age of ajay is greatest of them  : ";
        }
    }
    if (b>a)
    {
        if (b>c)
        {
            cout << "The age of shyam is greatest of them  : ";
        }
        else{
            cout<< "The age of ajay  is greatest of them  : ";
        }
    }
    
}