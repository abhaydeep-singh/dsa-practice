#include<iostream>
using namespace std;

class Hero{
    // data members
    public:
     int health;
     char level;
// creating constructor
Hero(){
    cout<<"constructor called"<<endl;
}
~Hero(){
    cout<<"destructor called"<<endl;
}

};


int main(){
    // creating static object
    // Hero obj;
    // obj.health=20;
    // cout<<"Size of obj: "<<sizeof(obj)<<endl;
    // cout<<"health: "<<obj.health;
    // destructor is called automatically during static object creation
    

    //Creating dynamic object
    Hero *obj2 = new Hero(); // use * with object name during dynamic creation
    obj2->health=32; // using [ -> ] pointer to access objects's datamembers/methods
    cout<<obj2->health<<endl;

    // destructor is to be called MANUALLY during dynamic creation
    delete obj2; // delete keyword used to call destructor
    


}
