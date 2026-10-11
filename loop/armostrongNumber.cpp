#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int temp = n;
    int sum = 0;
    while (n>0)
    {
        int ld = n%10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    if (sum == temp )
    {
        cout << "enter number is armstrong number : ";
    }
    else
    {
        cout << "Enter number is not armstrong number : ";
    }
    
}