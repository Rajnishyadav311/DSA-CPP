#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n%5==0 || n%3==0)
    {
        if (n%15==0)
        {
            cout<< "number is divisible by 5 and 3 and 15 : ";
        }
        else {
            cout << "number is divisible by 5 or 3 : ";
        }
    }
    else
    {
        cout << "not satisfied the situation : ";
    }
    return 0;
}