// 1. **Challenge 1: If Statement**\
//    Write a program that asks the user for their favorite tea. If they choose "Oolong," print a message saying, "You have excellent taste!"

#include<iostream>
using namespace std;
int main()
{
  string favTea;
  cout<<"Dear customer Could you tell your favourite tea ?"<<endl;
  cin>>favTea;
  if (favTea=="Oolong")
  {
    cout<<"You have an Excellent choice"<<endl;

  }
  else
  cout<<"Thankyou!"<<endl;

  return 0;
}