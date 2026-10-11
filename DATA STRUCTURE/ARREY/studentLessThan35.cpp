#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number of student : ";
    cin >> n;
    int marks[n];
    cout << "Enter the maks of student : ";
    for (int i = 0; i <=n-1; i++)
    {
        cin >> marks[i];
    }

    cout << "The roll number of student who fail in exam : ";
    for (int i = 0; i <=n-1; i++)
    {
        if (marks[i]<35)
        {
            cout << i << " ";
        }
        
    }
    

      
}