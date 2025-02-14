#include<iostream>
 #include<vector> //The C++ Standard Library vector class is a class template for sequence containers. A vector stores elements of a given type in a linear arrangement, and allows fast random access to any element. A vector is the preferred container for a sequence when random-access performance is at a premium.
using namespace std;
//sbi form

 class Chai  //class name always declared with capital letter 
{
  public :   // .....Access modifier ---> gives us access of functions or methods declared in an class these are of three types 1. (public :) ,(2. private :) ,(3. protected :)
        
          //data members(attributes)
          string teaname;
          int servings;
          vector<string> ingredients;


          // Member function
          void displayChaiDetailes()
          {
              cout<<"Tea name: "<<teaname <<endl;
              cout<<" Tea servings: "<<servings<<endl;
              for(string ingredient : ingredients)
              {
              cout << ingredient << " ";
              }
              cout<< endl;
          }
};   //ended with semicolon(;)





int main()
{
    Chai chaiOne;
    chaiOne.teaname="Lemontea";
    chaiOne.servings=5;
    chaiOne.ingredients={"Water", "lemon", "Honey", "tea"};
    chaiOne.displayChaiDetailes();


    Chai chaiTwo;
    chaiTwo.teaname = "Masala Chai";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger", "Masala"};
         
    chaiTwo.displayChaiDetailes();



  return 0;

}
