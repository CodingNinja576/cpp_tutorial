// ## 1. While Loop
// Challenge:
// Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.
#include<iostream>
using namespace std;
int main()
{
  int teacups;
  cout<<"Please enter the tea cup you have"<<endl;
  cin>>teacups;
 
  while(teacups >0)
  {
    teacups--;
   cout<<"Serving a cup of tea \n"<<teacups<<" Teacups are remainig"<<endl;
  }
  cout<<"All tea cups are served";
}