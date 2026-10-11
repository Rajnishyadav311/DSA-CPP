#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int noOfpages;
    int price;
    int countBooks(int p){
        if(price<p)
        return 1;
        else{
            return 0;
        }
    }
    bool isBookpresent(string book){
        if(book==name)
        return true;
        else {
            return false;
        }
    }
};
int main(){
    book harrypoter;
    harrypoter.name="Rajnish";
    harrypoter.price=100;
    harrypoter.noOfpages=200;
     cout << harrypoter.countBooks(50)<<endl;
     cout << harrypoter.isBookpresent("Rajnis")<<endl;
}
