#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout << "Enter the size of vectors : ";
    cin >> n;
    vector<int>v;
    cout<<"Enter the element of the vectors : ";
    for (int i = 0; i <n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    int x ;
    cout << "Target: ";
    cin >> x;
    for (int i = 0; i <=v.size()-2; i++)
    {
        for (int j= i+1; j <=v.size(); j++)
        {
            if(v[i]+v[j]==x){
                cout<< "("<<i<<","<<j<<")"<<endl;
            }
        }
        
    }
    
}