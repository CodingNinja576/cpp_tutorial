// Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.
#include<iostream>
using namespace std;
int main()
{
  cout<<"Welcome to tea shop\n";
  int teaprice;
  cout<<"Please input base price for tea"<<endl;
  // getline(cin,teaprice);
  cin>>teaprice;

  float modifiedprice= (float) (teaprice/10)+teaprice ;
  cout <<"price after total taxation is"<<modifiedprice;
}

