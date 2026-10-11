#include<iostream>
using namespace std;
int main (){
    int sp ;
    cout << "Enter the selling prize : ";
    cin >> sp;
    int cp ;
    cout << "Enter the cost prize : ";
    cin >> cp ;
    if (sp<cp)
    {
        cout << "loss  " << cp-sp;
    }
    if (sp>cp)
    {
        cout<<"profit " << sp - cp;
    }
    if (sp==cp)
    {
        cout << "No profit and no loss : "  ;
    }
    
}