#include<iostream>
using namespace std;
int main (){
    // float x = 7.1;
    // int y;
    // y = (int)x;
    // cout << y;
 

    // bool x  = true ;
    // cout << x+1;
    // return 0;

    // take inteser as a input and print half of the number :  

    // int y;
    // cout << "Enter the number that you want to take half : ";
    // cin >> y;
    // float x = (float)y;
    // cout << x/2;
    // return 0;
     
    // take float inteser input and print the fractional part of the real number
    
// it is valid for positive number only 
    //  float x ;
    //  cout << "Enter the float number to find its fractional value : ";
    //  cin >> x;
    //  int y = (int)x;
    //  float z = x-y;
    //  cout << z;

    // it is valid for negative number only 
      float x ;
     cout << "Enter the float number to find its fractional value : ";
     cin >> x;
     int y = (int)x; 
     if (y<0)
     y = y-1;
     float z =( float)y;
     x= x-z;
     cout << x;
     return 0;
     
     
}