// 4. **Challenge 4: Break and Continue**\
//    Write a program that checks a list of tea types and serves tea for each type, except "Herbal Tea." If "Herbal Tea" is encountered, skip it using `continue`. If "No Tea" is encountered, stop the loop using `break`.
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string tealist[7]={"normal chai","kadak chai","masala chai","oolong chai","herbal chai","no chai","lemon chai"};
  for(int i=0;i<7;i++)
  {
    
    if(tealist[i]=="herbal chai")
    {
      continue;
    }
    
    if(tealist[i]=="no chai")
    {
      break;
    }
    cout<<"serving \""<<tealist[i]<<"\" enjoy your day :::"<<endl;
  }

  return 0;
}