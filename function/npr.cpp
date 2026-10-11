#include<iostream>
using namespace std;
int fact(int x ){
    int a = 1;
    for (int i = 2; i <=x; i++)
    {
        a *=i;
    }
    return a;
}
int main (){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int r ;
    cout << "Enter the second number : ";
    cin >> r;
    int nFact = fact(n);
    int nrFact = fact(n-r);
    int nPr = nFact / nrFact;
    cout << nPr;
    return 0;
}

