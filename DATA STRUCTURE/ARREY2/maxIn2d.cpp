#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
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


      cout << "the maximum of the matrix : ";
     int max = INT_MIN;
     for(int i =0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
     }

     cout << max;

}