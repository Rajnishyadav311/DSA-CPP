#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int rec = 0;
    while (n>0)
    {
       int ld = n%10;
     rec = rec*10+ld;
     n = n/10;
    }
    cout << rec;
    return 0;
}