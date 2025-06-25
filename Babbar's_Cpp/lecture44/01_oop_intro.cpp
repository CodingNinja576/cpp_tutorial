#include<iostream>
// #include "02_Hero.cpp"   you can use this method if defined in any other program
using namespace std;
// creating class
class Hero{
   // properties
    
    // char name[100];

    private :

    int health;
    
    char level;
    void print(){
        cout<<level<<endl;
    }
    
    public : 
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }
    
    void setlevel(char ch){
        level = ch;
    }




    
};

int main(){

    // static allocation
    Hero ramesh;
    ramesh.sethealth(17);
    ramesh.setlevel ('A');

    cout<<"Health is : "<<ramesh.gethealth()<<endl;
    cout<<"level is : "<<ramesh.getlevel()<<endl;

    // dynamic allocation

    Hero *h = new Hero;

    (*h).sethealth(20);
    (*h).setlevel ('A');

     //           .......oR..............

    // h->sethealth(20);

    // h->setlevel ('A');

    cout<<"Health is : "<<(*h).gethealth()<<endl;
    cout<<"level is : "<<(*h).getlevel()<<endl;

    

    cout<<"size :"<<sizeof(ramesh)<<endl;
    // when there is empty class without any property than size of that objet from that empty class is 1
   
    
    // ramesh.sethealth(70);
    // ramesh.setlevel('A');


    // cout<<"Health is : "<<ramesh.gethealth()<<endl;
    // cout<<"level is : "<<ramesh.getlevel()<<endl;
    return 0;
}