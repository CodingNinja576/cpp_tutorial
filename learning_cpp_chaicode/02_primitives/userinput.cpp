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

  cout<<teaQuantity;
  cout<<usertea;
  return 0;
}
