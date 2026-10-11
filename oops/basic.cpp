// #include<iostream>
// using namespace std;
// class player{
//     public:
//     int score;
//     int health;
// };
// int main (){
//     player amit;
//     amit.score=80;
//     amit.health=90;
//     cout << amit.score << endl;
//     cout << amit.health<< endl;
// }

// #include<iostream>
// using namespace std;
// class calculator{
//     public:
//     int a;
//     int b;
//     void add(){
//         cout << a+b << endl;
//     }
//     void substract(){
//         cout << a-b << endl;
//     }
// };
// int main (){
//     calculator calci;
//     calci.a=7;
//     calci.b=8;
//     calci.add();
//     calci.substract();
// }


// #include<iostream>
// using namespace std;
// class player{
//      private:
//     int score;
//     int health;
//     public:
//     void setscore(int s){
//         cout<< "Score set kiya ja raha hai : ";
//         score = s;
//     }
//     void sethealth(int h){
//         cout<< "health set kiya ja raha hai : ";
//         health= h;
//     }
//     int getscore(){
//         return score;
//     }
//     int gethealth(){
//         return health;
//     }
// };
// int main(){
//    player rajnish;
//     rajnish.setscore(10);
//     cout << rajnish.getscore()<<endl;
//      rajnish.sethealth(100);
//     cout << rajnish.gethealth();


// }

#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int score;
    // set kare ke liye use ker rahe hume malume hai ki hum private ko set nahi ker sakte isliye hum get ka upyog karte hai 
    public:
    void setscore(int s){
        score = s;
    }
    void sethealth(int h){
        health = h;
    // value ko hum  direct get nahi ker sakte hai islie hum set ka upyog karte hai 
    }
    int getscore(){
        return score ;
    }
    int gethealth(){
        return health;
    }
};
int main (){
    player rajnish;
    rajnish.setscore(50);
    cout << rajnish.getscore()<<endl;

}