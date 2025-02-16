#include<iostream>
#include<vector>
using namespace std;
class Chai
{
  private:
        string teaname;
        int serving;
        vector<string> ingredients;


  public:
  //default constructor
        Chai()
        {
          teaname = "Unknoen tea";
          serving = 5;
          ingredients = {"water","tealeaves"};
        }
  //parametric constructor
  Chai(string name,int serve,vector<string> ing)
  {
    teaname = name;
    serving = serve;
    ingredients = ing;
  }      
    //getter
    string getTeaname()
                      {
                        return teaname;
                      }


    //setter
    void setTeaname(string name)
                    { 
                      //logic
                      teaname = name;
                    }


    //getter for servings     
     
     int getServing()
                  {
                    return serving;
                  }


    //setter for serving
        
     void setServing(int serve)
                     {
                       serving = serve;
                     } 

     //getter for ingredients

     vector<string>   getIngredients()
                                    {
                                      return ingredients;
                                    }           
      
     //setter for ingredients
      void setIngredients(vector<string> ingre)
                          {
                            ingredients = ingre;
                          }
      
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
  Chai chai;
  chai.setTeaname("Ginger tea");
  chai.setServing(5);
  chai.setIngredients({"water","tealeaves"});
 

}
