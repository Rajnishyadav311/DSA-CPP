#include<iostream>
using namespace std;
int main (){
    int m ;
    cout << "enter the row number";
    cin >> m;
    int n ;
    cout << "enter the column number";
    cin >> n;
    int arr[m][n];
    cout << "enter the roll number of the student ";
    for (int i = 0; i <m; i++)
    {
        for (int  j= 0; j <n; j++)
        {
            cin>> arr[i][j];
        }
        
    }
cout << "enter the marks of the student ";
     for (int i = 0; i <m; i++)
    {
        for (int  j= 0; j <n; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    
}