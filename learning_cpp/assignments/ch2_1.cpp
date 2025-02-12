// . **Challenge 1: Arithmetic Operators**\
//    Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.
#include<iostream>
using namespace std;
int main()
{
  int teapack;
  double priceperpack,totalprice,totalcost;
  cout<<"Please enter the no. of tea packs you want : "<<endl;
  cin>>teapack;
  cout<<"Please tell the no. of tea pack you want :"<<endl;
  cin>>priceperpack;

  totalprice = teapack*priceperpack;
  totalcost = totalprice+(totalprice*0.1);
  cout<<"After tax your teacbags costs you Rupees "<<totalcost;

  
  
  return 0;

}