#include<iostream>
#include<climits>
using namespace std;
int main (){
    int n;
    cout << "Enter the size of arr : ";
    cin >> n;
    int arr[n];
    // arrey input 
    for (int i = 0; i <=n-1; i++)
    {
        cin >> arr[i];
    }
    // arrey output 
    int max = INT_MIN;
    int sMax = INT_MIN;
    for (int i = 0; i <=n-1; i++)
    {
       if (arr[i]>max)
       {
        sMax = max ;
        max = arr[i];
       }
       else if (arr[i]>sMax && arr[i]!=max)
       {
        sMax = arr[i];
       }
       
    }
    if (sMax==INT_MIN)
    {
        cout << "Second max is not present : ";
    }
    else
    {
        cout << "Second max is " << sMax  << endl;
    }
    cout << "max is "<<max ;
    return 0;
}