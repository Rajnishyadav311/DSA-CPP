#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int q ;
        cin >> q;
        v.push_back(q);
    } 
    int x;
    cout << "Enter the search element : ";
    cin >> x;
    int e;
    for (int i = 0; i <v.size(); i++)
    {
       if(v[i]==x) e=i;
       break;
    }
    cout << e;
    
    
}