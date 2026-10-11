#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout <<"Enter the size of vectors : ";
    cin >> n;
    vector<int>v;
    cout<<"Enter the element of vectors : ";
    for (int i = 0; i <n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    int x ;
    cout<< "Enter the element which you want to search : ";
    cin >> x;
    int idx = -1;
    for (int i = v.size()-1; i>=0; i--)
    {
        if(v[i]==x) idx = i;
        break;
    }
    cout << idx;
    return 0;
}