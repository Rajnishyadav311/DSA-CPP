#include<iostream>
using namespace std;
int main (){
    int n ;
    cout << "Enter n";
    cin >> n;
    int r;
    cout << "Enter r";
    cin >> r;
    int nFact = 1;
    for (int i = 2; i <=n; i++)
    {
        nFact *= i;   
    }
     int rFact = 1;
    for (int i = 2; i <=r; i++)
    {
        rFact *= i;   
    }
     int nrFact = 1;
    for (int i = 2; i <=(n-r); i++)
    {
        nrFact *= i;   
    }
    int ncr = nFact / (rFact * nrFact );
    cout << ncr;
}
