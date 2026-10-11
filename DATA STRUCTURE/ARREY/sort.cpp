#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for (int i = 0; i <a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
}
void sortm2(vector<int>&v){
    int i = 0;
    int n = v.size();
    int j = n-1;
  while (i<j)
  {
    if(v[i]==0) i++;
    else if(v[j]==1) j--;
    else if (v[i]==1 && v[j]==0)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j]= temp;
        i++;
        j--;
    }
    
  }
  
    

}
int main (){
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    /// vector define and taking input ;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    /// apply two pointer methode : ;
    sortm2(v);
    display(v);
    
}