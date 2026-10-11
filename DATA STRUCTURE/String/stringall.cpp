#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s ;
    cout <<"Enter the string : ";
    getline(cin,s);
    // int n = s.size();
    // for(int i =0; i<n; i++){
    //     if(i%2==0){
    //         s[i] = 'a';
    //     }
    // }
    cout << s << " ";
    cout << endl;



    //    reverse(s.begin(), s.end());
    s.push_back('y');
    s.push_back('a');
    s.push_back('d');
    s.push_back('a');
    s.push_back('v');

       cout << s << " ";
       cout << endl;

       s.pop_back();
       s.pop_back();
       s.pop_back();
       s.pop_back();
       s.pop_back();

       cout << s << " ";


}