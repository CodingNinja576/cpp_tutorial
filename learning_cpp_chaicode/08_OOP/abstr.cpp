#include<iostream>
#include<string>
using namespace std;

// abstract class
class Tea 
{
    public :
              virtual void prepareingridient()=0; // pure virtual function and after virtual function that class is called abstract class 
              virtual void brew()=0;
              virtual void serve()=0;

              void makeTea()
              {
                prepareingridient();
                brew();
                serve();
                
              }

};

// derived class

class Greentea : public Tea
{  
  public : 

            void prepareingridient()
            {
              cout<<"green tea leaves and water is ready"<<endl;

            }
            
            void brew()
            {
              cout<<"Green tea brewed"<<endl;
            }

            void serve()
            {
              cout << " Green tea served"<<endl; 
            
            }

};

class  Masalachai : public Tea
{  
  public : 

                  void prepareingridient()
                  {
                    cout<<"green tea leaves and water is ready with masala"<<endl;

                  }
                  
                  void brew()
                  {
                    cout<<"masala tea brewed"<<endl;
                  }

                  void serve()
                  {
                    cout << " masala tea served"<<endl;   }

};
int main()
{
  Greentea greentea;
  Masalachai masalachai;
  greentea.makeTea();
  masalachai.makeTea();

  // This is use of abstraction ,encapsculation and virtual classes that we have more things hidden as we have not defined maketea function in any of derived classes but we can access them in our main method whethwr we have only defined derived classes here because we have declared virtual functions and the class ion which virtual functions are declared those classes are now abstracted and we have maded derived classes from the abstract classes...and maketea function is encapsculated in it.....
   

  return 0;
}