#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    n%2==0 ? cout << "even number : " : cout << "odd number : ";
    return 0;
}