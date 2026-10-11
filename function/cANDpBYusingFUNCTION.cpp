#include<iostream>
using namespace std;
int fact(int x){
    int a = 1;
    for (int i = 2; i <=x; i++)
    {
        a *=i;
    }
    return a;
}
int main (){
    int n ;
    cout << "Enter the first numebr ";
    cin >> n;
    int r ;
    cout << "Enter the second numebr ";
    cin >> r;
    int nFact = fact(n);
    int rFact = fact(r);
    int nrFact = fact(n-r);
    int ncr = nFact / (rFact * nrFact );
    cout << ncr;
}