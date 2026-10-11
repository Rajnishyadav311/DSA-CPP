#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for (int i = 0; i <a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
}
void sort1(vector<int>&a){
    int noz = 0;
    int noo = 0;
    for (int i = 0; i <a.size(); i++)
    {
        if(a[i]==0)  noz++;
        else noo++;
    }
    for (int i = 0; i <a.size(); i++)
    {
        if(i<noz) a[i]=0;
        else a[i]=1;
    }
    
}
int main (){
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int>v;
     // vector input 
     for (int i = 0; i <n; i++)
     {
        int q;
        cin >> q;
        v.push_back(q);
     }
     sort1(v);
     display(v);
}