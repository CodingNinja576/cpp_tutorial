// ### 3. **Nested If-Else**

// ### **Challenge:** A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount
// * Between 10 and 20 cups: 10% discount
// * Less than 10 cups: No discount

#include<iostream>
using namespace std;
int main()
{
 int cupcount;
 cout<<"Please enter the no. of cups you have ordered "<<endl;
 cin>>cupcount;
 if(cupcount >20)
 {
cout<<"You are eligible for 20% discount "<<endl;
 }
 else if(cupcount>=10&&cupcount<=20)
 {
  cout<<"You are eligible for 10% discount "<<endl;
 }

 
 else
 {
cout<<"You are not eligible for discount yet";
 }


  return 0;
}

