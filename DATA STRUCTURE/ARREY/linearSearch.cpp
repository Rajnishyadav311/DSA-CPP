#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the size of arrey : ";
    cin >> n;
    int arrey[n];
    cout << "Enter the element of arrey : ";
    for (int i = 0; i <=n-1; i++)
    {
        cin >> arrey[i];
    }
    int x ;
    cout << "enter the which you search in arrey : ";
    cin >> x;
    bool flag = false;
    for (int i = 0; i <=n-1; i++)
    {
        if(arrey[i]==x) flag = true;
    }
    if (flag==true )
    {
        cout << "search element is found im the arrey : ";
    }
    else
    {
        cout << "search element is not found in the arrey : ";
    }
    return 0;
}