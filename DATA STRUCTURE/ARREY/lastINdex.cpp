#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int>v;
    cout << "Enter the element of vector : ";
    for (int i = 0; i <n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    int idx = -1;
    int x;
    cout << "Enter the element  which you want to search : ";
    cin >> x;
    for (int i = 0; i <v.size(); i++)
    {
        if(v[i]==x) idx = i;
    }
    cout << idx;

}