#include<iostream>
#include<string>
#include<vector>
using namespace std;


// bASE / parent /main /original CLASS
class Tea
{
    protected :
              string teaname;
              int serving;
    public :
           //constructor
          Tea(string name,int serve)  : teaname(name) ,serving(serve){
            cout<<"Tea constructor called"<< teaname <<endl;
          };
  
  virtual void brew() const  {
    cout << " Brewing " << teaname <<"With generic method"<<endl;

  }

  virtual void serve() const  {
    cout << " Serving" << serving <<"cup of tea "<<endl;

  }

  virtual ~Tea(){
    cout<<"Tea destructor called for "<< teaname << endl;
  }





};
class Greentea : public Tea{
public:

Greentea(int serve):Tea("green tea",serve){
  cout<<"Greentea constructor called" <<endl;
}
void brew() const override {
  cout<< "Brewing "<<teaname << " by steeping tealeaves " << endl;
}

~Greentea(){
  cout<<"Greentea destructor called"<<endl;
}

};

class MasalaTea : public Tea{
public :
       MasalaTea(int serve) : Tea ("Masala tea ",serve){
        cout<<"Masaltea constructor called" << endl;

       }
   
    void brew() const override final {
        cout<< "Brewing "<<teaname << " by with spices and milk tealeaves " << endl;
      }

      ~MasalaTea(){
        cout<<"Masala tea destructor called"<<endl;
      }


};
// class Spicymasalatea : public MasalaTea{
// public :

//      void brew() const override {
//   cout<< "Brewing "<<teaname << " by steeping tealeaves " << endl;
// }
//};
int main()
{

  Tea* tea1 = new Greentea(2);
  Tea* tea2 = new MasalaTea(3);

  tea1->brew();
  tea1->serve();
  tea2->brew();
  tea2->serve();

  delete tea1;
  delete tea2;
  return 0;
}