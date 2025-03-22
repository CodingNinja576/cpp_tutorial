// <!-- 3. **Challenge 3: Nested If-Else**\
//    Write a program that checks the temperature of tea water input by the user:

// - If the temperature is above 100°C, print "Too hot!"
// - If the temperature is between 80°C and 100°C, print "Perfect temperature."
// - If the temperature is below 80°C, print "Too cold!" -->
#include<iostream>
using namespace std;
int main()
{
   double temp;
   cout<<"please input temp. of tea water "<<endl;
   cin>>temp;
   if (temp >100)
   {
      cout<<"Too hot "<<endl;

   }
   else if (temp >80 && temp<=100)
   {
      cout<<"Perfect temperature"<<endl;
   }
   else
   {
      cout<<"too cold";
   }
   
   
   return 0;
}