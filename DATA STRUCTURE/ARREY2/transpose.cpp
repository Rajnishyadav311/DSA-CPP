#include<iostream>
#include<climits>
using namespace std;
int main (){
     int m ;
    cout << "Enter the number of  row : ";
    cin >> m;
    int n;
    cout << "Enter the numeber of column";
    cin >> n;
    int arr[m][n];
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cin >> arr[i][j];
        }
    }
     // for printing the element in the original form 
     for(int i = 0; i<n; i++){
        for(int j =0; j<m; j++){
            cout<< arr[i][j] << " ";
        }
        cout << endl;
     }

     cout << endl;
     for(int i =0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << arr[j][i]  << " ";
        }
        cout << endl;
     }

     cout << endl;

     int brr[m][n];
     for(int i =0; i<m; i++){
        for(int j = 0; j<n; j++){
            brr[i][j] = arr[j][i];
        }
     }
     cout << endl;
     for(int i =0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << brr[i][j]  << " ";
        }
        cout << endl;
     }


}