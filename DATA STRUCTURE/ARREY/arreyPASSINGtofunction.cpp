#include<iostream>
using namespace std;
void display(int a[] , int size ){ // yaha arrey ka address point huaa hai aisa hum normal pass mr nahi ke sakte kyuki vah jab pass hota hai ho only value pass haota hai 
    
    for (int i = 0; i <=size-1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return ;
}
void change(int b[] , int size){
    b[0]=2;
}
int main (){
    int n;
    cout << "Enter the size of arrey : ";
    cin >> n;
    int arr[n];
    //    input ke liye use huaa hai 
    for (int i = 0; i <=n-1; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size << endl;
    // arrey ko pass karte hai function me 
    display(arr,size);
    change(arr,size);
    display(arr,size);

}