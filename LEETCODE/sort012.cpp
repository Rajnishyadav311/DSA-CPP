#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
   for (int i = 0; i <a.size(); i++)
   {
     cout << a[i] << " ";
   }
   
}

void sort012(vector<int>&v){
    int noz = 0;
    int noo = 0;
    int notw = 0;
    for ( int i = 0; i <v.size(); i++)
    {
        if(v[i]==0) noz++;
        else if(v[i]==1) noo++;
        else notw ++;
    }
    for (int i = 0; i <v.size(); i++)
    {
        if(i<noz) v[i]=0;
        else if(i<(noz+noo)) v[i]=1;
        else v[i]=2;
    }
    

}
int main (){
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    // define and taking input ;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    sort012(v);
    display(v);
}