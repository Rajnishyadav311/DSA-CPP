#include<iostream>
using namespace std;
int main (){
    char  ch ;
    cout << "Enter the chacter :   ";
    cin >> ch ;
    int ascii = (int)ch ;
    if (ascii>=65 && ascii<=90 ||  ascii>=97 && ascii <=122 )
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||  ch == 'o' || ch == 'u' )
        {
            cout << "Enter alphabet is vowel ";
        }
       else
       {
        cout << "Enter alphabetr is consonat : ";
       }
        
    }
    else
    {
        cout << "Not satisfied the condition : ";
    }
    return 0;
}