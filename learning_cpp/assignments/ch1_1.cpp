// Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.
#include<iostream>

using namespace std;
int main()
{
  cout<<"\tWelcome to Tea Information display\t\n";
  string typeOFtea = "Lemon tea";

  float pricePERkg = 75.55;
  char rating ='A';

  cout<<"WE have your Favourite \""<< typeOFtea <<"\"at best price "<<pricePERkg<<" perkg"<<"and its rating is \""<<rating<<"\"by kanpur"<<endl;
  return 0;


}