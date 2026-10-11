#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for (int i = 0; i <a.size(); i++)
    {
        cout<< a[i]<< " ";
    }
    
}
int main (){
    int n;
    cout << "Enter the size of vectors : ";
    cin >> n;
    vector<int>v1;
    cout<<"Enter the element of the vectors : ";
    for (int i = 0; i <n; i++)
    {
        int q;
        cin >> q;
        v1.push_back(q);
    }
    display(v1);
    cout << endl;
    // using second vectors : 
    vector<int>v2(v1.size());
    for (int i = 0; i <v1.size(); i++)
    {
        int j = v1.size()-1-i;
        v2[i]=v1[j];
        
    }
    display(v2);
    
    // using one vectors // know as two pointer methode :  : 
    // int i = 0;
    // int j = v1.size()-1;
    // while (i<=j)
    // {
    //      int temp ;
    //      temp = v1[i];
    //      v1[i]=v1[j];
    //      v1[j]=temp;
    //      i++;
    //      j--;
    // }
    //  display(v1);
    // cout << endl;
}