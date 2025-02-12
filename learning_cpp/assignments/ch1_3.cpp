// Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.

#include<iostream>

using namespace std;
int main()
{
  string usertea;
  int teaQuantity;
  cout<<"What you Like to Order in Tea ?\n";

  getline(cin,usertea);

  // ask for quantity 


  cout<<"how many cups of "<< usertea  <<"  You want to have ? \n";
  cin>>teaQuantity;

  cout << "Thankyou ! for confirming your order of "<<teaQuantity<<" cup of " <<usertea<<" Will be delivered to your table before you reach !";
  return 0;
}
