#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for (int i = 0; i <v.size(); i++)
    {
       cout << v[i] << " ";   
    }
    
}
int main(){
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
    // reverse karna hai witout extra arrey : 
    int i=0;
    int j = v.size()-1;
    while (i<=j)
    {
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    display(v);
}