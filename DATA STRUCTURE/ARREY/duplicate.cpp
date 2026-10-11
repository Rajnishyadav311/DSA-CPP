#include<iostream>
using namespace std;
int main (){
    int n;
    cout<< "Enter the number : ";
    cin >> n;
    int arr[n];
    // input arrey by user : 
    for (int i = 0; i <=(n-1); i++)
    {
        cin >> arr[i];
    }
    bool flag = false ;
    for (int i = 0; i <=n-2; i++)
    {
        for (int j = i+1; j <=n-1; j++)
        {
            if(arr[i]==arr[j]) {
                flag = true;
                break;
            }
        }
        
    }
    if(flag==true){
        cout << "duplicate is avaible : ";
    }
    else{
        cout << "duplicate is not available : ";
    }
}