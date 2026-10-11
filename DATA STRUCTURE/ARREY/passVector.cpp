#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>&v){
    v[0]=100;
}
int main (){
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    for (int  i = 0; i <v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    for (int  i = 0; i <v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}