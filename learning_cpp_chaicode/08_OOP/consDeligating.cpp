#include<iostream>
#include<vector>
using namespace std;
class Chai
{    public:
            string teaname;
            int serving;
            vector<string> ingredients;

            //main constructor
            Chai(string name,int serve,vector<string> ingre)
            {teaname = name;
              serving= serve;
              ingredients= ingre;
              cout<<"Main constructor called !";

            }

            //DELIGATING CONSTRUCTOR
            Chai(string name)  : Chai(name,1,{"Water","tea leaves"}){}

    void displaychaidetails()
    { 
      cout<< "chai name :"<<teaname<<endl;
      cout<<"chai srvings :"<< serving<<endl;
      for(string ingredient : ingredients)
      {
        cout<< ingredient <<" ";
      } 
      cout <<endl;

    }                       
            

};
int main()
{
  Chai quickchai("Quick chai");  //now we want a constructor which will do work when only one value is passed so here we need deligating constructor
  quickchai.displaychaidetails();
}