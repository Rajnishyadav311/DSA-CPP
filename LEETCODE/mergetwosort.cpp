#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for (int i = 0; i <v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
}
void merge(vector<int>&v1,vector<int>&v2,vector<int>&v){
    int i =0;
    int j = 0;
    int k = 0;
    int r = v1.size();
    int s = v2.size();
    while (i<=r-1 && j<=s-1)
    {
        if (v1[i]<v2[j])
        {
            v[k]=v1[i];
            k++;
            i++;
        }
        else {
            v[k]=v2[j];
            k++;
            j++;
        }
    }
    if(i==r){
        while (j<=s-1)
        {
           v[k]=v2[j];
            k++;
            j++;
        }
        
    }
   if (j==s)
   {
    while (i<=r-1)
    {
         v[k]=v1[i];
            k++;
            i++;
    }
    
   }
   
}
int main (){
    int n;
    cout << "Enter the size of first  vector : ";
    cin >> n;
     int m;
    cout << "Enter the size of  second vector : ";
    cin >> m;
    vector<int>v1;
    cout << "Enter the element of first vector : ";
    for (int i = 0; i <n; i++)
    {
        int q ;
        cin >> q;
        v1.push_back(q);
    }
    vector<int>v2;
    cout << "Enter the element of second vector : ";
    for (int i = 0; i <m; i++)
    {
        int q ;
        cin >> q;
        v2.push_back(q);
    }
     cout << endl << "the size of resulytant vector is" <<endl ;
    cout<< v1.size();
     cout << endl << "the size of resulytant vector is" <<endl ;
    cout<< v2.size();
    int r = v1.size();
    int s = v2.size();
    vector<int>v(r+s);
    // merg the sort aarey or vector 
    merge(v1,v2,v);
    cout << endl << "the size of resulytant vector is" <<endl ;
    cout<< v.size();
    cout<< "Sorted merge vector is :" ;
    display(v);
    cout << endl << "the size of resulytant vector is" <<endl ;
    cout<< v.size();
}