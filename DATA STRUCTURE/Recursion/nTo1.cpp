// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return ;
//     fun(n-1);
//     cout << n << " ";
    
// }
// int main  (){
//     fun(10);
// }

#include <iostream>
using namespace std;
int add(int sum , int n){
    if(n==0) return sum ;
    return n+add(n-1);
}
int main() {
    int n;
    cin >> n;
    add(0,n);
    cout << add ;
    return 0;
}