// 2. **Challenge 2: Assignment Operators**\
//    Create a program where the user inputs the number of tea bags they have. If the number is less than 20, give them 10 extra bags using the `+=` assignment operator. Display the updated total.

#include<iostream>
using namespace std;
int main()
{
 
  int teabags;
  cout<<"Please enter  no. of teabags you have :";
  cin>>teabags;
  if(teabags < 20)
  {
    teabags += 10;
    
  }
  cout<<"Your total bags are :"<< teabags<<endl;
  return 0;
  
}

