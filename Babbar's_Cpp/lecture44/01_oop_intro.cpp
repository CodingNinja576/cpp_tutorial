#include<iostream>
// #include "02_Hero.cpp"   you can use this method if defined in any other program
using namespace std;
// creating class
class Hero{
   // properties
    
    // char name[100];
    

    // constructor created  ir work as default construcror
    public :
     Hero(){
        cout<<"Constructor called :"<<endl;
    }

    // parameterized constructor

    Hero(int health){

        cout<<"this valur -->"<<this <<endl;
        this -> health = health;
    }
    Hero(int health, char level){
        
        cout<<"this value -->"<<this <<endl;
        this -> health = health;
        this->level=level;
    }
 
    void print(){
        cout<<"Health : "<<this->health<<endl;
        cout<<"level"<<this->level<<endl;    
    }
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
   


 // copy constructor called
   Hero suresh(70, 'C');
   Hero Ritesh(suresh);


    // // object created statically
    // Hero ramesh(20);
    // cout<<"address of ramesh is :"<<&ramesh<<endl;
    // // object created dynamically

    // Hero *h = new Hero;

    // Hero temp(22,'H');
    

    /*
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

    */
    return 0;
}