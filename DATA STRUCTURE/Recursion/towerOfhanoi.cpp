#include<iostream>
using namespace std;
void towerOfhanoi(int n , char s ,char h , char d){
    if(n==0) return;
    towerOfhanoi(n-1,s,d,h);
    cout<<s<<" -->"<<d << endl;
    towerOfhanoi(n-1,h,s,d);

}
int main(){
    int  n;
    cout << "Enter the number of disc:";
    cin >> n;
    towerOfhanoi( n ,'S' ,'H' ,'D');
} 