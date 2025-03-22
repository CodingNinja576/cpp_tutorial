// 2. **Challenge 2: Do-While Loop**\
//    Write a program that asks the user if they want to add more sugar to their tea. Keep asking until they respond with "enough." Use a `do-while` loop for this.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 string response;
 do
 {
  cout<<"If they want to add more sugar to their tea"<<endl;
  cin>>response;
 }while(response!="enough"&&response!="Enough"&&response!="ENOUGH");  //you have to understand thjis topic again
 
  return 0;
}