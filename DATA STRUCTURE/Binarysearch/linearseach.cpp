#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,5,8,1,9};
    int x = 1;
    bool flag = false;
    for (int i = 0; i <7; i++)
    {
        if (arr[i]==x)
        {
            flag = true;
        }
        
    }
    if (flag==true)
    {
        cout<<"Search numnber found in arrey ";
    }
    else{
        cout << "not found";
    }
}