#include<iostream>
using namespace std;
int main (){
     int n;
     cout<< "Enter the size of arrey : ";
     cin >> n;
     int arr[n];
     // input 
     for (int i = 0; i <n; i++)
     {
        cin >> arr[i];
     }
      // ouput 
       for (int i = 0; i <n; i++)
     {
        cout<<arr[i] << endl;
     }
      
}