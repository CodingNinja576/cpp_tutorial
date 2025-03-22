#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Chai
{
  private :
      string teaname;
      int serving;
  
      

   public :
   Chai(string name ,int serve)
   { 
    teaname = name;
    serving = serve;

   }  
   friend bool compareServing(const Chai &chai1,const Chai &chai2);
   //This is a friend function we can also declare clas main function of it is just to give acces oof a private members of any class to any other function or any other classes.....
   void display() const{
    cout<<"teaname"<< teaname<<endl;
   }
   
   
};
bool compareServing(const Chai &chai1,const Chai &chai2)
   {
    return (chai1.serving > chai2.serving);
   }
int main()
{
  Chai maslachai("masala chai" ,4);
  Chai gingerchai("ginger chai",13);
  maslachai.display();
  gingerchai.display();
 
  if(compareServing(maslachai,gingerchai))
  {
    cout << "masala chai is having more serving..."<<endl;
  }
  else
  {
    cout<<"masala chai is having less serving"<<endl;
  }
  return 0;
  
}