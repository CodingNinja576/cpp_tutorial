#include<iostream>
#include<vector>
using namespace std;

class Chai{

  public:
      string teaname;
      int servings;
      vector<string> ingredients;

      // parameter constructor
      Chai(string name , int servno , vector<string> ingr)
      {
        teaname=name;
        servings= servno;
        ingredients=ingr;
        cout<<" Parameter Constructor called\n"; 
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

  Chai lemontea("Green tea",5,{"lemon,","water,","tealeaves"});
  cout<< lemontea.teaname<< endl;
  cout<< lemontea.servings<<endl;
  lemontea.dispalychaidetails();
  return 0;
}
