// 5. **Challenge 5: Nested Loops**\
//    Write a program that displays a tea brewing schedule. For each day of the week (outer loop), brew 2 cups of tea for breakfast, lunch, and dinner (inner loop).
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string week[7]={"monday","tuesday","wednesday","Thursday","Friday","Saturday","sunday"};
  string time[3]={"breakfast","lunch","dinner"};
  for(int i=0;i<7;i++)
  {
     cout<<"******"<<week[i]<<"*******"<<endl;
     for(int j =0;j<3;j++)
     {
      cout<<"Brewing 1st cup of "<<time[j]<<endl;
      cout<<"Brewing 2nd cup of "<<time[j]<<endl;
     }

  }

}