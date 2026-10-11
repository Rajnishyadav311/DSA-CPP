#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of arrey : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <=n-1; i++)
    {
        cin >> arr[i];
    }
      // sum 
      int sum = 1;
      for (int i = 0; i <=n-1; i++)
      {
        sum = sum * arr[i];
      }
      cout << sum ;
      return 0;
}