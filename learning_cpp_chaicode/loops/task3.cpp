// ## 3. For Loop
// Challenge:
// Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.
#include<iostream>
using namespace std;
int main()
{
  int teacup=5;
  for(int i =1;i<=5;i++)
  {
    cout<<"Brewing cup "<<i<<" cup of tea \n";
  }
  return 0;
}