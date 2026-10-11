#include<iostream>
#include<climits>
using namespace std;
int main (){
    int n;
    cout << "Enter the size of arrey : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of arrey : ";
    for (int i = 0; i <=n-1; i++)
    {
        cin >> arr[i];
    }
    //int max = arr[0];
    int min = INT_MAX;
    for (int i = 0; i <=n-1; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }
    cout << min;
}