#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0)
        count++;
    }
    if (count==2)
    {
        cout<< " this number is prime number : ";
    }
    else{
        cout << "this number is not prime number :  ";
    }
    return 0;
}