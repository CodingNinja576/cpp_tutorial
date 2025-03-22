// ### 4. **Logical Operators**

// ### **Challenge:** Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.

// > > && and || operators

#include<iostream>
using namespace std;
int main()
{
  //string status;
   bool isStudent;
  
  int cupcount;
  cout<<"Whether you are a student or not (1 for yes and 0 for no)"<<endl;
  //cout <<"Are you a student ?"<<endl;
  cin >>isStudent;
  cout<<"PLease enter the no. cup of cup you have buyed ;"<<endl;
  cin>>cupcount;
  if( isStudent || cupcount >15   )  
  {
    cout<<"congratulations! you are eligible for discount";
  }
  else
  {
    cout<<"Sorry you are not eligible for discount";
  }




}
