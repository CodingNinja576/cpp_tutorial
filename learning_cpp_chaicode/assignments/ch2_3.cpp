// 3. **Challenge 3: Relational and Logical Operators**\
//    A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include<iostream>
using namespace std;
int main()
{
  bool isMember;
  
  int cupcount;
  cout<<"Whether you are a member from past 1 year (1 for yes and 0 for no)"<<endl;
 
  cin >>isMember;
  cout<<"PLease enter the no. cup of cup you have buyed ;"<<endl;
  cin>>cupcount;
  if( isMember || cupcount >12  )  
  {
    cout<<"congratulations! you are eligible for discount";
  }
  else
  {
    cout<<"Sorry you are not eligible for discount";
  }

  return 0;
}