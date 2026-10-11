#include<iostream>
using namespace std;
int main (){
    char ch ;
    cout << "Enter the character : ";
    cin >> ch;
    int ascii ;
    ascii = int(ch);
    if ( (ascii >=65 && ascii<=90) || (ascii >=97 && ascii<=122))
    {
        cout << "Enter charcter is alphbet : ";
    }
    else
    {
        cout << "Enter the character is not alphabet : ";
    }
    return 0;
}