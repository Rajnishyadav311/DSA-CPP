#include<iostream>
using namespace std;
// int power(int a, int b){
//     if(b==1) return a;   /// valid only for even power 
//     int ans = power(a,b/2);
//     return ans*ans;
// }
    int power(int a, int b){
        if(b==1) return a;
        int ans = power(a,b/2);
        if (b%2==0)
          return ans*ans;  
        else
            return ans*ans*a;
    }
int main(){
    int a;
    cin>>a;
    int b;
    cin >> b;
   cout <<  power(a,b);
}