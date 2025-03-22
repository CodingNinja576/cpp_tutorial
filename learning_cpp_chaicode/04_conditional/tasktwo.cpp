// ### 2. **If-Else Statement**

// ### **Challenge:** Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 hr and 18 hr, the shop is open; otherwise, it’s closed.
#include<iostream>
using namespace std;
int main()
{
  float time;
  cout<<"Please enter the current time "<<endl;
  cin>>time;
 if(time>=8 && time<=18)
 {
  cout <<"Shop is open now";
 }
else
{
  cout<<"shop is closed now";
}


  return 0;
}