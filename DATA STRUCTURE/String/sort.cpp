#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout << "Enter the first string : ";
    getline(cin,s);
    string t;
    cout << "Enter the second string : ";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.begin());

    cout << "String after the sorting ";
    cout << endl;
    cout << s;
    cout<< "String 2 after the sorting : ";
    cout << t;
   if(s==t) cout << true;
   else cout << false ;
    

}