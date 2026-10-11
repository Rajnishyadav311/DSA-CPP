#include<iostream>
using namespace std;
int main(){
    int m ; 
    cout<< "enter the row of the matrix";
    cin >> m;
    int n ;
    cout << " enter the column of the matrix : ";
    cin >> n;
    int arr[m][n] ;
    for (int  i = 0; i <m; i++)
    {
        for (int  j = 0; j<n; j++)
        {
            cin >> arr[i][j];
        }   
    }
       for (int  i = 0; i <m; i++)
    {
        for (int  j = 0; j <n; j++)
        {
           cout<<  arr[i][j] << " ";
        }
        cout << endl;
    }
}