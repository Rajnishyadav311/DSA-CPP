#include<iostream>
using namespace std;
void print(int crr, int n , int s){
    if(n==s) return;
    cout << crr[s];

}
int main (){
    int arr[] = {1,2,5,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n,0);
}