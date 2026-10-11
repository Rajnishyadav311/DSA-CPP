#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for (int i = 0; i <v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    
}
void revp(int i , int j , vector<int>&a){
    while (i<=j)
    {
        int temp ;
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    
}
int main (){
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int>v;
    cout << "Enter the element : " << endl;
    for (int i = 0; i <n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    display(v);
    cout << endl;
    // reverse part 
    // taking input from user starting and ending point 
    int r;
    cout<< "starting : ";
    cin >> r;
    int s;
    cout << "Ending : ";
    cin >> s;
    revp(r,s,v);
    display(v);
    cout << endl;
}