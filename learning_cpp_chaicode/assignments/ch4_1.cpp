// 1. **Challenge 1: While Loop**\o input the number of tea bags they have left. Stop when the number of bags is 0, and print a me
//    Write a program that keeps asking the user tssage that they are out of tea bags.

#include<iostream>
using namespace std;
int main()
{
  int teabags;
  
  while (teabags!=0)
  {
    cout<<"Please enter the no. of teabags"<<endl;
    cin>>teabags;
  }
  cout<<"now you are out of tea bags"<<endl;
  

}