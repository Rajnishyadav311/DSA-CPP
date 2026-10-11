#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
   for (int i = 0; i <a.size(); i++)
   {
     cout << a[i] << " ";
   }
   
}
void sort(vector<int>&v){
    int lo = 0;
    int mid = 0;
    int n = v.size();
    int hi = n-1;
    while (mid<=hi)
    {
      if (v[mid]==2)
      {
        int temp = v[mid];
        v[mid]= v[hi];
        v[hi]=temp;
        hi--;
      }
      if (v[mid]==0)
      {
        int temp = v[mid];
        v[mid]=v[lo];
        v[lo]=temp;
        lo++;
        mid++;
      }
     if (v[mid]==1)
     {
        mid++;
     }
     
      
    }
    
}
int main (){
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    
    sort(v);
    display(v);
}