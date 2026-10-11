#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout << "Enter the number of row of first matrix";
    cin >> n;
    int m ;
    cout << "Enter the numebr of column of first matrix";
    cin >> m;
    int p;
    cout << "Enter the number of row in second matrix ";
    cin>> p;
    int q;
    cout << "Enter the coulmn number of second matrix ";
    cin >> q;

    if(m==n){
        int arr[n][m];
        cout << "Enter the element of first matrix ";
        for(int i =0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin >> arr[i][j];
            }
        }

        int brr[p][q];
        cout <<"Enter the element of second matrix : ";
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                cin >> brr[i][j];
            }
        }
    }
    else{
        cout << "multiplication is not possoble " ;
    }
}