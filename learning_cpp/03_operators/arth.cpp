// ## 1. **Arithmetic Operators**

// ### **Challenge:** Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.

#include<iostream>
using namespace std;
int main()
{
  int cups;
  double pricepercup ,totalprice, discountedPrice;
  cout<<"Please enter the no. of tea cups : \n";
  cin>>cups;
  cout<<"Enter the price percups :\n";
  cin>>pricepercup;
  totalprice = cups*pricepercup;
  
  //apply 5% discount if total price is above 100$ 


  
if(totalprice>=100)
{
  discountedPrice=totalprice - (totalprice*0.05);
  cout<<" Your final Discounted price is : "<<discountedPrice<<endl;
}
else
{
  cout<<"Your final price is :"<<totalprice<<endl;
}


  return 0;
}
