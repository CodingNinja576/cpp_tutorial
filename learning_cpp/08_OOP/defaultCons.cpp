#include<iostream>
#include<vector>
using namespace std;

class Chai{

  public:
      string teaname;
      int servings;
      vector<string> ingredients;

      // default constructor
      Chai()
      {
        teaname="greenTea";
        servings= 1;
        ingredients={"tealeaves","WATER"};
        cout<<"Constructor called\n"; 
      }
      void dispalychaidetails()
      {
        cout<<"Tea name: "<<teaname <<endl;
        cout<<" Tea servings: "<<servings<<endl;
        for(string ingredient : ingredients)
        {
          cout << ingredient <<" ";
        }
        cout <<endl;
      }


};


int main()
{

  Chai defaultchai;
  cout<< defaultchai.teaname<< endl;
  cout<< defaultchai.servings<<endl;
  defaultchai.dispalychaidetails();
  return 0;
}
