// ### 1. **If Statement**

// ### **Challenge:** Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.
#include<iostream>
using namespace std;
int main()
{
   string typeOfTea ;
   cout <<"Whether you want to order Green Tea ( if yes please type \"Greentea\" )"<<endl;
   cin>>typeOfTea;
   if(typeOfTea == "Greentea")
   {
    cout<<"Your order of \"Green tea \" has been succesfully placed "<<endl;

   }
   else
   {
    cout<<"Your order couldn't be ordered"<<endl;
   }


  return 0;
}